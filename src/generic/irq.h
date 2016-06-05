#ifndef __GENERIC_IRQ_H
#define __GENERIC_IRQ_H

#include <stdint.h>

void irq_disable(void);
void irq_enable(void);
uint8_t irq_save(void);
void irq_restore(uint8_t flag);

#endif // irq.h
