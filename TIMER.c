
#include"TIMER.h"
#include"GPIO.h"
#include"interrupt_macros.h"
void delay_us(uint64_t delay){
    
    //delay allowed max 6000 microseconds
    
    TAUB0TPS = (1U<<2); //CK0 with clock frequency 40MHz/2^2
    
    TAUB0CDR(0)  = (uint16_t)(delay*10); // storing the requried counts
    TAUB0CMOR(0) = 0x00; // interval mode timer
    TAUB0CMUR(0) = 0X00; // not used
    TAUB0TS |= (1U<<0); //start timer TAUB0CNT will store with TAUB0CDR and counts to zero;
    
    while(TAUB0CNT(0)!= COUNTER_ZERO);
   
     //stay here until the counter reaches zero
  
    TAUB0TT |= (1U<<0); // stop the timer

        // disabled interrupts and output mode from timer



}
void start_timer_with_interrupt_enable(uint64_t delay){


    /*TAUB0 channel 0 timer setting*/ 
    TAUB0TPS = (1U<<2); //CK0 with clock frequency 40MHz/2^2
    TAUB0CDR(0)  = (uint16_t)(delay*10); // storing the requried counts
    TAUB0CMOR(0) = 0x00; // interval mode timer with CKO as clock
    TAUB0CMUR(0) = 0X00; // not used
   
    /*Interrupt setting*/
    ICTAUB0I(0) &= ~(1U<<12); // disabling interrupt request.
    ICTAUB0I(0) &= ~(1U<<7); // enable interrupt processing
    ICTAUB0I(0) |= (1U<<6); // looking for ISR in vector table

    /*setting the priority of the interrupt 0->high 15-> low*/
    ICTAUB0I(0) |= (1U<<3)|(1U<<2)|(1U<<1)|(1U<<0); // low priority interrupt

     TAUB0TS |= (1U<<0); //start timer TAUB0CNT will store with TAUB0CDR and counts to zero;


}

void generate_pwm(PORT_G port,PIN_NUM pin,uint8_t duty_cycle){

  /*      
          set the pin as alternative mode
          find the channel to which the output pin connected
          make it into slave
          set the corrsponding to timer output mode
          enable simultaneous rewrite mode
          select the master mode: timer interval mode
          start the timers  
            */
       uint8_t n = 0; // for storing channel number
    if(port==10 && pin == 13)
             n = 5;
	if(port==10 && pin == 11)
		n = 1;
    /*CLock prescaler Settings*/
    TAUB0TPS = (1U<<2); //CK0 with clock frequency 40MHz/2^2

    /*Master channel configuration*/
   
    TAUB0CDR((n-1)) = 0xFFFF ; /*need to update based on duty cycle*/
    TAUB0CMOR((n-1)) |= (1u<<11)|(1u<<0); /*configure into master channel intervel timer mode*/
    TAUB0CMUR((n-1)) = 0x00;  /*not used*/
    TAUB0RDE |= (1U<<(n-1));  /*Enables simultaneous rewrite.*/
    TAUB0RDS &= ~(1U<<(n-1));  /*Selects a master channel for simultaneous rewrite triggers.*/
    TAUB0RDM &= ~(1U<<(n-1)); /*Generates a simultaneous rewrite trigger signal when the master channel starts to count.*/
    TAUB0RDC &= ~(1U<<(n-1)); /*Does not operate as a simultaneous rewrite trigger generation channel.*/

    /*Slave channel Configuration*/
    /*(100-duty_cycle) because of negitive logic in TAUB0TOL*/
    TAUB0CDR(n) = ((100-duty_cycle)*(TAUB0CDR((n-1))+1))/100; /*need to update based on duty cycle*/
    TAUB0CMOR(n) |= (1u<<3)|(1u<<0)|(1U<<10)|(1U<<8); /*configure into slave  channel one count mode*/
    TAUB0CMUR(n) = 0x00;  /*not used*/
    TAUB0RDE |= (1U<<n);  /*Enables simultaneous rewrite.*/
    TAUB0RDS &= ~(1U<<n);  /*Selects a master channel for simultaneous rewrite triggers.*/
    TAUB0RDM &= ~(1U<<n); /*Generates a simultaneous rewrite trigger signal when the master channel starts to count.*/
    TAUB0RDC &= ~(1U<<n); /*Does not operate as a simultaneous rewrite trigger generation channel.*/

    /*Output mode for the slave channel */

    TAUB0TOE |= (1U<<n);   /*Enables independent channel output mode*/
    TAUB0TOM |= (1U<<n);   /*Synchronous channel operation*/
    TAUB0TOC &= ~(1U<<n);  /*Operating mode 1*/ 
    TAUB0TOL |= (1U<<n);  /*Negitive logic*/
    TAUB0TDE &= ~(1U<<n);  /*Disables dead time operation*/
    TAUB0TDL &= ~(1U<<n);

    /*Configure the pin into Alternative pin*/
    PMC(port)   |= (1U<<pin); /*alternative mode*/
    PM(port)    &= ~(1U<<pin); /*outputpin*/
    /*Configuration will change based on the pin and port passing*/
    PFCAE(port) &= ~(1U<<pin);
    PFCE(port)  |= (1U<<pin);
    PFC(port)   |= (1U<<pin);
   

       /*Enable Interrupts*/
    
	    
      /*Interrupt setting*/
    ICTAUB0I((n-1)) &= ~(1U<<12); // disabling interrupt request.
    ICTAUB0I((n-1)) &= ~(1U<<7); // enable interrupt processing
    ICTAUB0I((n-1)) |= (1U<<6); // looking for ISR in vector table
    
      /*Interrupt setting*/
    ICTAUB0I(n) &= ~(1U<<12); // disabling interrupt request.
    ICTAUB0I(n) &= ~(1U<<7); // enable interrupt processing
    ICTAUB0I(n) |= (1U<<6); // looking for ISR in vector table
    
    
    TAUB0TS |= (1U<<(n)) | (1U<<(n-1)); // start timers
    
 

}
 