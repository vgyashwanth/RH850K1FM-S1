#ifndef COMMON_H
#define COMMON_H

//Userdefined datatypes
#ifndef __TYPEDEF__
    typedef signed char           int8_t;
    typedef unsigned char         uint8_t;
    typedef signed short          int16_t;
    typedef unsigned short        uint16_t;
    typedef signed long           int32_t;
    typedef unsigned long         uint32_t;
    typedef signed long long      int64_t;
    typedef unsigned long long    uint64_t;
   

/*assigning the names to port group and port pin*/

typedef enum{

    PORT0=0,
    PORT8=8,
    PORT9,
    PORT10,
    PORT11

}PORT_G;  
typedef enum{

  PIN0,PIN1,PIN2,PIN3,PIN4,PIN5,PIN6,PIN7,PIN8,PIN9,PIN10,PIN11,PIN12,PIN13,PIN14,PIN15  

}PIN_NUM;

/*GPIO LOGIC LEVELS*/
typedef enum{LOW,HIGH}LOGIC_LEVEL;

 #define __TYPEDEF__
#endif
// Clock configurations registers
#ifndef CLOCK_H
#define CLOCK_H

#define MOSCE  (*((volatile uint32_t *)(0xFFF81100))) // main oscillator start register 

#define MOSCS  (*((volatile uint32_t *)(0xFFF81104))) // check the status of the clock

#define MOSCC  (*((volatile uint32_t *)(0xFFF81108))) // set frequency of the Main oscillator

//mask register to continue the clock supply in Standbymode or deepstopmode
#define MOSCSTPM (*((volatile uint32_t *)(0xFFF81118))) 

#define MOSCM   (*((volatile uint32_t *)(0xFFF8111C))) //MainOSC Mode Control Register

#define ROSCE    (*((volatile uint32_t *)(0xFFF81000))) // HS IntOSC Enable Register

#define ROSCS   (*((volatile uint32_t *)(0xFFF81004))) //HS IntOSC Status Register

#define ROSCSTPM (*((volatile uint32_t *)(0xFFF81018))) //HS IntOSC Stop Mask Register

#define PLL1E    (*((volatile uint32_t *)(0xFFF89000)))  //PLL1 Enable Register

#define PLL1S    (*((volatile uint32_t *)(0xFFF89004)))  //PLL1 Status Register

#define PLL1C    (*((volatile uint32_t *)(0xFFF89008)))  //PLL1 Control Register

#define CKSC_PLL1IS_CTL (*((volatile uint32_t *)(0xFFF8A700)))//PLL1 Input Clock Selection Register

#define CKSC_PLL1IS_ACT (*((volatile uint32_t *)(0xFFF8A708))) //PLL1 Input Clock Active Register

#define CKSC_PPLLCLKS_CTL  (*((volatile uint32_t *)(0xFFF8A010))) //PPLLCLK Source Clock Selection Register

#define CKSC_PPLLCLKS_ACT (*((volatile uint32_t *)(0xFFF8A018))) //PPLLCLK Source Clock Active Register

// CPU Clock selection registers.

#define CKSC_CPUCLKS_CTL (*((volatile uint32_t *)(0xFFF8A000))) //C_ISO_CPUCLK Source Clock Selection Register
#define CKSC_CPUCLKS_ACT (*((volatile uint32_t *)(0xFFF8A008))) //C_ISO_CPUCLK Source Clock Active Register
#define CKSC_CPUCLKD_CTL (*((volatile uint32_t *)(0xFFF8A100))) //C_ISO_CPUCLK Clock Divider Selection Register
#define CKSC_CPUCLKD_ACT (*((volatile uint32_t *)(0xFFF8A108))) //C_ISO_CPUCLK Clock Divider Active Register

uint8_t enable_all_clocks(void);

#endif

// for passing logic operations as a parameters.
#ifndef OPERATION_H
#define OPERATION_H

#define ERROR 1
#define SUCESS 0

#endif

/* protection command registers */
#ifndef PROTECTION_CMD_H
#define PROTECTION_CMD_H

#define PROTCMD0  (*(volatile uint32_t *)0xFFF80000)
#define PROTCMD1  (*(volatile uint32_t *)0xFFF88000)
#define PROTS0    (*(volatile uint32_t *)0xFFF80004)
#define PROTS1    (*(volatile uint32_t *)0xFFF88004)
#define CLMA0PCMD (*(volatile uint32_t *)0xFFF8C010)
#define CLMA1PCMD (*(volatile uint32_t *)0xFFF8D010)
#define CLMA3PCMD (*(volatile uint32_t *)0xFFF8E010)
#define CLMA0PS   (*(volatile uint32_t *)0xFFF8C014)
#define CLMA1PS   (*(volatile uint32_t *)0xFFF8D014)
#define CLMA3PS   (*(volatile uint32_t *)0xFFF8E014)

#define PROTCMDCLMA (*(volatile uint32_t *)0xFFF8C200)
#define PROTSCLMA   (*(volatile uint32_t *)0xFFF8C204)

#define JPPCMD0 (*(volatile uint32_t *)0xFFC204C0)
#define PPCMD0 (*(volatile uint32_t *)0xFFC14C00)
#define PPCMD8 (*(volatile uint32_t *)0xFFC14C20)
#define JPPROTS0 (*(volatile uint32_t *)0xFFC204B0)
#define PPROTS0 (*(volatile uint32_t *)0xFFC14B00)
#define PPROTS8 (*(volatile uint32_t *)0xFFC14B20)
#define PPCMD9 (*(volatile uint32_t *)0xFFC14C24)
#define PPCMD10 (*(volatile uint32_t *)0xFFC14C28)
#define PPCMD11 (*(volatile uint32_t *)0xFFC14C2C)
#define PPROTS9 (*(volatile uint32_t *)0xFFC14B24)
#define PPROTS10 (*(volatile uint32_t *)0xFFC14B28)
#define PPROTS11 (*(volatile uint32_t *)0xFFC14B2C)

#define PROTCMDCVM (*(volatile uint32_t *)0xFFF83200)
#define PROTSCVM (*(volatile uint32_t *)0xFFF83204)
#define FLMDPCMD (*(volatile uint32_t *)0xFFA00004)
#define FLMDPS (*(volatile uint32_t *)0xFFA00008)

uint8_t write_protected_register(volatile uint32_t * protected_reg,
                                uint32_t val,
                                volatile uint32_t * protected_cmd_reg,
                                volatile uint32_t * protected_status_reg
                            
                                 );






#endif


#endif 