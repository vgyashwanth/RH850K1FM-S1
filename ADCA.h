#ifndef ADCA_H
#define ADCA_H
#include"common_declarations.h"
#define ADCA0_base 0xFFF20000

// virtual channel setting register
#ifndef ADCA0_VIRTUAL_CHANNEL_REG

#define ADCA0VCR(j)        (*(volatile uint32_t *)(ADCA0_base + j * 0x4))        //Virtual channel register j
#define ADCA0PWDVCR       (*(volatile uint32_t *)(ADCA0_base + 0x0F4 ))          //PWM-Diag virtual channel register
#define ADCA0DR(j)       (*(volatile uint32_t *)(ADCA0_base + 0x100 + j * 0x2)) //Data register j
#define ADCA0DIR(j)       (*(volatile uint32_t *)(ADCA0_base + 0x200 + j * 0x4 ))//Data supplementary information register j
#define ADCA0PWDTSNDR      (*(volatile uint32_t *)(ADCA0_base + 0x178 ))        //PWM-Diag data register
#define ADCA0PWDDIR       (*(volatile uint32_t *)(ADCA0_base + 0x2F4 ))          //PWM-Diag data supplementary information register

#define ADCA0_VIRTUAL_CHANNEL_REG
#endif

// ADCA control registers
#ifndef ADCA0_CONTROL_REG

#define ADCA0ADHALTR          (*(volatile uint32_t * )(ADCA0_base + 0x300))     //A/D force halt register
#define ADCA0ADCR          (*(volatile uint32_t * )(ADCA0_base + 0x304))        //A/D control register
#define ADCA0MPXCURR          (*(volatile uint32_t * )(ADCA0_base + 0x30C))    //MPX current register
#define ADCA0THSMPSTCR          (*(volatile uint32_t * )(ADCA0_base + 0x314))  //T&H sampling start control register
#define ADCA0THCR          (*(volatile uint32_t * )(ADCA0_base + 0x318))       //T&H control register
#define ADCA0THAHLDSTCR          (*(volatile uint32_t * )(ADCA0_base + 0x31C))  //T&H group A hold start control register
#define ADCA0THBHLDSTCR          (*(volatile uint32_t * )(ADCA0_base + 0x320))  //T&H group B hold start control register
#define ADCA0THACR          (*(volatile uint32_t * )(ADCA0_base + 0x324))       //T&H group A control register
#define ADCA0THBCR          (*(volatile uint32_t * )(ADCA0_base + 0x328))       //T&H group B control register
#define ADCA0THER          (*(volatile uint32_t * )(ADCA0_base + 0x32C))        //T&H enable register
#define ADCA0THGSR          (*(volatile uint32_t * )(ADCA0_base + 0x330))       //T&H group select register
#define ADCA0SMPCR          (*(volatile uint32_t * )(ADCA0_base + 0x380))       //Sampling control register

/*MUX Selection registers are not included because we are not using external MUX for ADCA0*/
#define ADCA0_CONTROL_REG
#endif

/*ADCA0 Safety registers */

#ifndef ADCA0_SAFETY_REG

#define ADCA0SFTCR         (*(volatile uint32_t * )(ADCA0_base + 0x334)) /*Safety control register*/
#define ADCA0ULLMTBR0      (*(volatile uint32_t * )(ADCA0_base + 0x338)) /*Upper limit/lower limit table register 0*/
#define ADCA0ULLMTBR1      (*(volatile uint32_t * )(ADCA0_base + 0x33C)) /*Upper limit/lower limit table register 1*/
#define ADCA0ULLMTBR2      (*(volatile uint32_t * )(ADCA0_base + 0x340)) /*Upper limit/lower limit table register 2*/
#define ADCA0ECR           (*(volatile uint32_t * )(ADCA0_base + 0x344))  /*Error clear register*/
#define ADCA0ULER          (*(volatile uint32_t * )(ADCA0_base + 0x348))  /*Upper limit/lower limit error register*/
#define ADCA0OWER          (*(volatile uint32_t * )(ADCA0_base + 0x34C))  /*Overwrite error register*/
#define ADCA0ULEVCFR0      (*(volatile uint32_t * )(ADCA0_base + 0x540)) /*Upper limit/lower limit error VC flag register 0*/
#define ADCA0ULEVCFR1      (*(volatile uint32_t * )(ADCA0_base + 0x544)) /*Upper limit/lower limit error VC flag register 1*/
#define ADCA0ULLMTBR3      (*(volatile uint32_t * )(ADCA0_base + 0x564)) /*Upper limit/lower limit table register 3*/
#define ADCA0ULLMTBR4      (*(volatile uint32_t * )(ADCA0_base + 0x568)) /*Upper limit/lower limit table register 4*/
#define ADCA0ULLMTBR5      (*(volatile uint32_t * )(ADCA0_base + 0x56C)) /*Upper limit/lower limit table register 5*/
#define ADCA0ULLMTBR6      (*(volatile uint32_t * )(ADCA0_base + 0x570)) /*Upper limit/lower limit table register 6*/
#define ADCA0ULLMTBR7      (*(volatile uint32_t * )(ADCA0_base + 0x574)) /*Upper limit/lower limit table register 7*/

#define ADCA0_SAFETY_REG
#endif

/*ADCA0 Scan group registers*/
#ifndef ADCA0_SCAN_GROUP_REG

#define ADCA0SGSTCR(x)      (*(volatile uint32_t * )(ADCA0_base + x * 0x40 + 0x400)) /*can group x start control register*/ 
#define ADCA0PWDSGSTPCR      (*(volatile uint32_t * )(ADCA0_base + 0x504)) /*PWM-Diag scan stop control register*/
#define ADCA0PWDSGCR      (*(volatile uint32_t * )(ADCA0_base + 0x508)) /*PWM-Diag scan group control register*/ 
#define ADCA0SGCR(x)      (*(volatile uint32_t * )(ADCA0_base + x * 0x40 + 0x408)) /*Scan group x control register*/ 
#define ADCA0SGVCSP(x)      (*(volatile uint32_t * )(ADCA0_base + x * 0x40+ 0x40C)) /*Scan group x start virtual channel pointer*/
#define ADCA0SGVCEP(x)      (*(volatile uint32_t * )(ADCA0_base + x * 0x40 + 0x410)) /*Scan group x end virtual channel pointer*/
#define ADCA0SGMCYCR(x)      (*(volatile uint32_t * )(ADCA0_base + x * 0x40 + 0x414)) /*Scan group x multicycle register*/
#define ADCA0PWDSGSEFCR      (*(volatile uint32_t * )(ADCA0_base + 0x518)) /*PWM-Diag scan end flag clear register*/ 
#define ADCA0SGSEFCR(x)      (*(volatile uint32_t * )(ADCA0_base + x * 0x40 + 0x418)) /*Scan group x scan end flag clear register*/ 
#define ADCA0SGSTR      (*(volatile uint32_t * )(ADCA0_base + 0x308)) /*Scan group status register*/ 
#define ADCA0SGSTPCR(x)      (*(volatile uint32_t * )(ADCA0_base + x * 0x40 + 0x404)) /*Scan group x stop control register*/    


#define ADCA0_SCAN_GROUP_REG
#endif


#ifndef HARDWARE_TRIGGER_REG

#define ADCA0SGTSEL(x) (*(volatile uint32_t *)(ADCA0_base + x * 0x40 + 0x41C)) /*Scan group x start trigger control register*/

#define HARDWARE_TRIGGER_REG
#endif


#ifndef SELF_DIAG_REG

#define ADCA0DGCTL0 (*(volatile uint32_t * )(ADCA0_base  + 0x350))  /* Self-diagnosis control register 0*/
#define ADCA0DGCTL1 (*(volatile uint32_t * )(ADCA0_base  + 0x354))  /* Self-diagnosis control register 1*/
#define ADCA0PDCTL1 (*(volatile uint32_t * )(ADCA0_base  + 0x358))  /* Pull down control register 1*/
#define ADCA0PDCTL2 (*(volatile uint32_t * )(ADCA0_base  + 0x35C))  /* Pull down control register 2*/

#define SELF_DIAG_REG
#endif

/*Function declartions*/




#endif /*endif for #ifndef ADCA_H*/