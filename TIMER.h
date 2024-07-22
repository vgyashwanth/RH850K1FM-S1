#ifndef TIMER_H
#define TIMER_H
#include"common_declarations.h"


#define COUNTER_ZERO 0

#define TAUB0_base (0xFFE30000)
#define TAUB0TPS   (*((volatile uint16_t *)(TAUB0_base + 0x240))) //TAUB0 prescaler registers

/*m refers to the channel of the timer, n refers timer unit*/ 
#define TAUB0CDR(m)   (*(volatile uint16_t *)(TAUB0_base + 0x0 + (m * 4) ))    //TAUB0 channel data register 
#define TAUB0CNT(m)  (*(volatile uint16_t *)(TAUB0_base + 0x80 + (m * 4) ))  //TAUB0 channel counter register 
#define TAUB0CMOR(m) (*(volatile uint16_t *)(TAUB0_base + 0x200 + (m * 4))) //TAUB0 channel mode OS register 
#define TAUB0CMUR(m) (*(volatile uint8_t *)(TAUB0_base + 0xC0 + (m * 4)) ) //TAUB0 channel mode user register 
#define TAUB0CSR(m)  (*(volatile uint8_t *)(TAUB0_base + 0x140 + (m * 4)))  //TAUB0 channel status register 
#define TAUB0CSC(m)  (*(volatile uint8_t *)(TAUB0_base + 0x180 + (m * 4)))  //TAUB0 channel status clear trigger register 
#define TAUB0TS      (*(volatile uint16_t *)(TAUB0_base + 0x1C4) )            //TAUB0 channel start trigger register 
#define TAUB0TE      (*(volatile uint16_t *)(TAUB0_base + 0x1C0 ))             //TAUB0 channel enable status register 
#define TAUB0TT      (*(volatile uint16_t *)(TAUB0_base + 0x1C8 ))            //TAUB0 channel stop trigger register 


/*TAUBn reload data registers*/
#define TAUB0RDE  (*(volatile uint16_t *)(TAUB0_base + 0x260))  /*TAUBn channel reload data enable register*/
#define TAUB0RDM  (*(volatile uint16_t *)(TAUB0_base + 0x264))  /*TAUBn channel reload data mode register*/
#define TAUB0RDS  (*(volatile uint16_t *)(TAUB0_base + 0x268))  /*TAUBn channel reload data control channel select register*/
#define TAUB0RDC  (*(volatile uint16_t *)(TAUB0_base + 0x26C))  /*TAUBn channel reload data control register*/
#define TAUB0RDT  (*(volatile uint16_t *)(TAUB0_base + 0x44))  /*TAUBn channel reload data trigger register*/
#define TAUB0RSF  (*(volatile uint16_t *)(TAUB0_base + 0x48))  /*TAUBn channel reload status register*/

/*TAUBn output registers*/
#define TAUB0TOE (*(volatile uint16_t * )(TAUB0_base + 0x5C)) /*TAUBn channel output enable register */
#define TAUB0TO  (*(volatile uint16_t * )(TAUB0_base + 0x58))  /*TAUBn channel output register*/
#define TAUB0TOM (*(volatile uint16_t * )(TAUB0_base + 0x248)) /*TAUBn channel output mode register*/
#define TAUB0TOC (*(volatile uint16_t * )(TAUB0_base + 0x24C)) /*TAUBn channel output configuration register*/
#define TAUB0TOL (*(volatile uint16_t * )(TAUB0_base + 0x040)) /*TAUBn channel output active level register*/
#define TAUB0TDE (*(volatile uint16_t * )(TAUB0_base + 0x250)) /*TAUBn channel dead time output enable register*/
#define TAUB0TDL (*(volatile uint16_t * )(TAUB0_base + 0x54)) /*TAUBn channel dead time output level register*/

void delay_us(uint64_t delay);
void start_timer_with_interrupt_enable(uint64_t delay);
void generate_pwm(PORT_G port,PIN_NUM pin,uint8_t duty_cycle);







#define TAUD0_base (0xFFE20000)
#define TAUD0TPS   (*((volatile uint16_t *)(TAUD0_base + 0x240))) //TAUB0 prescaler registers

/*m refers to the channel of the timer, n refers timer unit*/ 
#define TAUD0CDR(m)   (*(volatile uint16_t *)(TAUD0_base + 0x0 + (m * 4) ))    //TAUB0 channel data register 
#define TAUD0CNT(m)  (*(volatile uint16_t *)(TAUD0_base + 0x80 + (m * 4) ))  //TAUB0 channel counter register 
#define TAUD0CMOR(m) (*(volatile uint16_t *)(TAUD0_base + 0x200 + (m * 4))) //TAUB0 channel mode OS register 
#define TAUD0CMUR(m) (*(volatile uint8_t *)(TAUD0_base + 0xC0 + (m * 4)) ) //TAUB0 channel mode user register 
#define TAUD0CSR(m)  (*(volatile uint8_t *)(TAUD0_base + 0x140 + (m * 4)))  //TAUB0 channel status register 
#define TAUD0CSC(m)  (*(volatile uint8_t *)(TAUD0_base + 0x180 + (m * 4)))  //TAUB0 channel status clear trigger register 
#define TAUD0TS      (*(volatile uint16_t *)(TAUD0_base + 0x1C4) )            //TAUB0 channel start trigger register 
#define TAUD0TE      (*(volatile uint16_t *)(TAUD0_base + 0x1C0 ))             //TAUB0 channel enable status register 
#define TAUD0TT      (*(volatile uint16_t *)(TAUD0_base + 0x1C8 ))            //TAUB0 channel stop trigger register 


/*TAUBn reload data registers*/
#define TAUD0RDE  (*(volatile uint16_t *)(TAUD0_base + 0x260))  /*TAUBn channel reload data enable register*/
#define TAUD0RDM  (*(volatile uint16_t *)(TAUD0_base + 0x264))  /*TAUBn channel reload data mode register*/
#define TAUD0RDS  (*(volatile uint16_t *)(TAUD0_base + 0x268))  /*TAUBn channel reload data control channel select register*/
#define TAUD0RDC  (*(volatile uint16_t *)(TAUD0_base + 0x26C))  /*TAUBn channel reload data control register*/
#define TAUD0RDT  (*(volatile uint16_t *)(TAUD0_base + 0x44))  /*TAUBn channel reload data trigger register*/
#define TAUD0RSF  (*(volatile uint16_t *)(TAUD0_base + 0x48))  /*TAUBn channel reload status register*/

/*TAUBn output registers*/
#define TAUD0TOE (*(volatile uint16_t * )(TAUD0_base + 0x5C)) /*TAUBn channel output enable register */
#define TAUD0TO  (*(volatile uint16_t * )(TAUD0_base + 0x58))  /*TAUBn channel output register*/
#define TAUD0TOM (*(volatile uint16_t * )(TAUD0_base + 0x248)) /*TAUBn channel output mode register*/
#define TAUD0TOC (*(volatile uint16_t * )(TAUD0_base + 0x24C)) /*TAUBn channel output configuration register*/
#define TAUD0TOL (*(volatile uint16_t * )(TAUD0_base + 0x040)) /*TAUBn channel output active level register*/
#define TAUD0TDE (*(volatile uint16_t * )(TAUD0_base + 0x250)) /*TAUBn channel dead time output enable register*/
#define TAUD0TDL (*(volatile uint16_t * )(TAUD0_base + 0x54)) /*TAUBn channel dead time output level register*/












#endif