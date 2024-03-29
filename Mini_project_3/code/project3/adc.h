/*
 * adc.h
 *
 *  Created on: Oct 6, 2022
 *      Author: Mina sobhy
 *      description: header file to declare ADC functions prototypes
 */


#ifndef ADC_H_
#define ADC_H_

#include "std_types.h"


/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/

#define ADC_MAXIMUM_VALUE    1023
#define ADC_REF_VOLT_VALUE   2.56

/*******************************************************************************
 *                         Types Declaration                                   *
 *******************************************************************************/
typedef enum
{
	AREF , AVCC , INTERNAL_VOLTAGE =3
} ADC_ReferenceVoltage ;

typedef enum
{
	F_CPU_2 = 1, F_CPU_4 , F_CPU_8 , F_CPU_16 , F_CPU_32 , F_CPU_64 , F_CPU_128
} ADC_Prescaler ;

typedef struct
{
	ADC_ReferenceVoltage ref_volt;
	ADC_Prescaler prescaler;
} ADC_ConfigType ;


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Initialization of ADC
 */
void ADC_init(const ADC_ConfigType * Config_Ptr);

/*
 * Description :
 * receive the input data and convert it from analog to digital
 */
uint16 ADC_readChannel(uint8 a_channelNum);

#endif /* ADC_H_ */
