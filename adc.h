/*
 * adc.h
 *
 *  Created on: 24 jun. 2021
 *      Author: Personal
 */

#ifndef ADC_H_
#define ADC_H_
typedef unsigned int uint_8;
extern  void ADC_vfnDriverInit (void); 
extern uint_8 ADC_bfnReadADC(uint_8 bChannel, uint_8 *bpADCValue);
#endif /* ADC_H_ */
