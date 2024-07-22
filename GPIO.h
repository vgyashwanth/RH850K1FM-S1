
#ifndef GPIO_H // include gaurds
#define GPIO_H
#include"common_declarations.h"
// defination of the registers

#define PORTn_base  (0xFFC10000) // base address

// for setting I/O mode or Alternative mode

#define PMC(n)       (*((volatile uint16_t* )(PORTn_base + 0x0400 + n*4))) 

// for controlling I/O direction (software or peripheral)

#define PIPC(n)      (*((volatile uint16_t*)(PORTn_base + 0x4200 + n*4)))

// for setting Input_pin or Output_pin

#define PM(n)       (*((volatile uint16_t*)(PORTn_base + 0x0300 + n*4)))
#define APM(n)      (*((volatile uint16_t*)(PORTn_base + 0x03C8 + n*4)))
//  Port Input Buffer Control Register
#define PIBC(n)     (*((volatile uint16_t*)(PORTn_base + 0x4000 + n*4)))

/*For ADCAn Peripheral*/
#define APIBC(n)    (*((volatile uint16_t*)(PORTn_base + 0x40C8 + n*4)))

/*Port Function Control Register*/
#define PFC(n)      (*((volatile uint16_t*)(PORTn_base + 0x0500 + n*4)))

/*Port Function Control Expansion Register*/
#define PFCE(n)     (*((volatile uint16_t*)(PORTn_base + 0x0600 + n*4)))

/*Port Function Control Additional Expansion Register*/
#define PFCAE(n)    (*((volatile uint16_t*)(PORTn_base + 0x0A00 + n*4)))

/*Port Bidirection Control Register*/
#define PBDC(n)     (*((volatile uint16_t*)(PORTn_base + 0x4100 + n*4)))
#define APBDC(n)    (*((volatile uint16_t*)(PORTn_base + 0x41C8 + n*4)))

/*Port Pin Read Register*/
#define PPR(n)      (*((volatile uint16_t*)(PORTn_base + 0x0200 + n*4)))
#define APPR(n)     (*((volatile uint16_t*)(PORTn_base + 0x02C8 + n*4)))

// writing data to the port
#define P(n)         (*((volatile uint16_t*)(PORTn_base + 0x0000 + n*4)))
#define AP(n)        (*((volatile uint16_t*)(PORTn_base + 0x00C8 + n*4)))

/*Pull-Up Option Register*/
#define PU(n)        (*((volatile uint16_t*)(PORTn_base + 0x4300 + n*4)))

/*Pull-Down Option Register*/
#define PD(n)        (*((volatile uint16_t*)(PORTn_base + 0x4400 + n*4)))




void Outputpin(PORT_G,PIN_NUM);
void digitalWrite(PORT_G,PIN_NUM,LOGIC_LEVEL);
void Toogle_PIN(PORT_G,PIN_NUM);

#endif