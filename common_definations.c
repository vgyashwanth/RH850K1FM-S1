#include"common_declarations.h"
uint8_t write_protected_register(volatile uint32_t * protected_reg,
                                uint32_t val,
                                volatile uint32_t * protected_cmd_reg,
                                volatile uint32_t * protected_status_reg
                             
                                 )
{

  /*Write access to a write-protected register is enabled by using the following protection unlock sequence:
1. Write the fixed value 0000 00A5H to the protection command register.
2. Write the desired value to the protected register.
3. Write the bit-wise inversion of the desired value to the protected register.
4. Write the desired value to the protected register.
5. Verify that the desired value has been written to the protected register.
Verify successful write of the desired value to the protected register by verifying that the error monitor bit in the 
protection status register is “0”.
In case the write was not successful, indicated by the error monitor bit set to “1”, the entire sequence has to be restarted 
at step 1.
 */

                (*protected_cmd_reg) = (uint32_t)0x000000A5;

                (*protected_reg) = val;
                (*protected_reg) = ~(val);
                (*protected_reg) = val;

                 return ((*protected_status_reg)&1U); 
                

                                 }



uint8_t enable_all_clocks(void){

      //Basic configuration for clocks
        uint8_t write_status;
        MOSCC |= ( (1U<<1) | (1U<<0) ); // Main_osc 8MHz    
        MOSCSTPM &= ~(1U<<0); // Main_osc stops in stanby_mode
        MOSCM &= ~(1U<<0); // Main_osc mode (internal oscillator mode)
        //protection function call
	//start the Main oscillator
        write_status = write_protected_register(&MOSCE,(1U<<0),&PROTCMD0,&PROTS0);
        //check the write protection status.
        if(ERROR == write_status)
            return ERROR;
        
          /*by default Hs_Intosc in enabled */ 

        // for PLL1 clock configuration
         // input to PLL1 is Hint_osc of 8MHz
     write_status = write_protected_register(&CKSC_PLL1IS_CTL,(1U<<1),&PROTCMD1,&PROTS1);
        if(ERROR == write_status)
            return ERROR;

        PLL1C &= (0U); // cleearing the bits for clearing the reset value
        PLL1C |= 0X3B; // Mr = 0 ,Nr = 60 Division ratios for 8MHz input
        // PPLL output clock = 80Mhz.
        // Configuring PPLLCLOCK Source as PPLL output (PPLLCLOCK  = PPLLOUT)
        write_status = write_protected_register(&CKSC_PPLLCLKS_CTL,((1U<<1)|(1U<<0)),&PROTCMD1,&PROTS1);
         if(ERROR == write_status)
            return ERROR;
        //enable the PLL1 clock.
        write_status = write_protected_register(&PLL1E,(1U<<0),&PROTCMD1,&PROTS1);
         if(ERROR == write_status)
            return ERROR;
        // configuring CPU Clock
     
        // CPLL1 as clock source to CPU
        write_status = write_protected_register(&CKSC_CPUCLKS_CTL,((1U<<1)|(1U<<0)),&PROTCMD1,&PROTS1);
         if(ERROR == write_status)
            return ERROR;
	  // making CPLL1  to 80MHz and setting clock divisor to one
        write_status = write_protected_register(&CKSC_CPUCLKD_CTL,(1U<<0),&PROTCMD1,&PROTS1);
         if(ERROR == write_status)
            return ERROR;
        // Port clock CPUCLK_UL operates at CPLL1/4 = 20MHz

        // if everything goes correct then return SUCESS.
        return SUCESS;

}
