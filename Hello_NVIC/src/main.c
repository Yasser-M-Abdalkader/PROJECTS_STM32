/************************************************************************************************
 * @file        main.c
 * @author      Yasser M. Abdalkader (m.abdelkader.yasser@gmail.com)
 * @brief       Simple App created to test NVIC driver implementation.
 *              This program checks the hardware priority and nesting by firing the
 *              software for EXT0 and EXT1.
 * @version     0.1
 * @date        2022-02-17
 * @copyright   Copyright (c) 2022
 ************************************************************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "RCC_interface.h"
#include "NVIC_interface.h"

void main(void)
{
    MRCC_voidInitSysClock();
    MRCC_voidEnableClock(RCC_APB2, 2); /* Enable GPIOA Clock */

    MGPIO_voidSetPinDirection(GPIOA, GPIO_PIN0, GPIO_OUTPUT_SPEED_2MHZ_PP);
    MGPIO_voidSetPinDirection(GPIOA, GPIO_PIN1, GPIO_OUTPUT_SPEED_2MHZ_PP);
    MGPIO_voidSetPinDirection(GPIOA, GPIO_PIN2, GPIO_OUTPUT_SPEED_2MHZ_PP);

    /* Initialize NVIC */
    MNVIC_voidInit();
    MNVIC_voidSetPriority(7, 0x30); /* EXTI 1- Group : 0 Sub-group : 3 */
    MNVIC_voidSetPriority(6, 0x40); /* EXTI 0- Group : 1 Sub-group : 0 */
    MNVIC_voidEnableInterrupt(6);  /* Enable EXTI0 from NVIC */
    MNVIC_voidEnableInterrupt(7);  /* Enable EXTI1 from NVIC */
    MNVIC_voidSetPendingFlag(6);   /* Set Pending flag for EXTI0 by software */

    while (1)
    {
        /* code */
    }
}

void EXTI0_IRQHandler(void)
{
    MGPIO_voidSetPinValue(GPIOA, GPIO_PIN0, GPIO_HIGH);
    MNVIC_voidSetPendingFlag(7); /* Set Pending flag for EXTI1 by software */
    MGPIO_voidSetPinValue(GPIOA, GPIO_PIN1, GPIO_HIGH);
}
void EXTI1_IRQHandler(void)
{
    MGPIO_voidSetPinValue(GPIOA, GPIO_PIN2, GPIO_HIGH);
}
