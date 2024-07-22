#ifndef INTERRUPT_MACRO_H
#define INTERRUPT_MACRO_H
#include"common_declarations.h"

/* TAUB0 CH0 Interrupt control register connected to INTC2 channel no 142 */
/* TAUB0 Interrupts base address */
#define TAUB0INT_base (0xFFFFB11C)
#define ICTAUB0I(n) (*(volatile uint16_t *)(TAUB0INT_base + (n*0x02)))
#define ICTAUB0I(n) (*(volatile uint16_t *)(TAUB0INT_base + (n*0x02)))
#define ICTAUB0I(n) (*(volatile uint16_t *)(TAUB0INT_base + (n*0x02)))
#define ICTAUB0I(n) (*(volatile uint16_t *)(TAUB0INT_base + (n*0x02)))


#endif