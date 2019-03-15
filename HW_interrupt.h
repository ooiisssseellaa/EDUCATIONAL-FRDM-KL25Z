/*
 * HW_interrupt.h
 *
 *  Created on: 15 mar 2019
 *      Author: Alessio
 */

#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MKL25Z4.h"

void PORTD_IRQHandler(void);
void HW_interrupt_init(void);
