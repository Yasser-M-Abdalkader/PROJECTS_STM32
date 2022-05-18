/*********************************************************************************
 * @file        NVIC_private.h
 * @author      Yasssr Mustafa
 * @brief       NVIC Driver - MCAL
 * @version     0.1
 * @date        2022-03-10
 * @copyright   Copyright (c) 2022
 *********************************************************************************/
#ifndef NVIC_PRIVATE_H_
#define NVIC_PRIVATE_H_

/*********************************************************************************
 * \def NVIC_BASE_ADDRESS
 *  NVIC base address
 *********************************************************************************/
#define NVIC_BASE_ADDRESS 0xE000E100
#define SCB_BASE_ADDRESS 0xE000ED00

/*********************************************************************************
 * \def NVIC_ISER0
 * Interrupt set-enable bits **[0 : 31]**
 * \def NVIC_ISER1
 * Interrupt set-enable bits **[32 : 63]**
 *
 * \def NVIC_ICER0
 * Interrupt clear-enable bits **[0 : 31]**
 * \def NVIC_ICER1
 * Interrupt clear-enable bits **[32 : 63]**
 *
 * \def NVIC_ICPR0
 * Interrupt clear-pending bits **[0 : 31]**
 * \def NVIC_ICPR1
 * Interrupt clear-pending bits **[32 : 63]**
 *
 * \def NVIC_IABR0
 * Interrupt active flags **[0 : 31]**
 * \def NVIC_IABR1
 * Interrupt active flags **[32 : 63]**
 *********************************************************************************/
#define NVIC_ISER0 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x000))
#define NVIC_ISER1 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x004))
#define NVIC_ICER0 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x080))
#define NVIC_ICER1 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x084))
#define NVIC_ISPR0 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x100))
#define NVIC_ISPR1 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x104))
#define NVIC_ICPR0 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x180))
#define NVIC_ICPR1 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x184))
#define NVIC_IABR0 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x200))
#define NVIC_IABR1 *((volatile u32 *)(NVIC_BASE_ADDRESS + 0x204))
/*********************************************************************************
 * \def NVIC_IPR
 * Interrupt priority register(IPR): provides a 4-bit priority field for each 
 * interrupt
 *********************************************************************************/
#define MNVIC_IPR    ((volatile u8 *)NVIC_BASE_ADDRESS + 0x300)

#define MNVIC_GROUP_4_SUB_0  0x05FA0300    /* Groups: 16   | SubRoups: None    */
#define MNVIC_GROUP_3_SUB_1  0x05FA0400    /* Groups: 8    | SubRoups: 2       */
#define MNVIC_GROUP_2_SUB_2  0x05FA0500    /* Groups: 4    | SubRoups: 4       */
#define MNVIC_GROUP_1_SUB_3  0x05FA0600    /* Groups: 2    | SubRoups: 8       */
#define MNVIC_GROUP_0_SUB_4  0x05FA0700    /* Groups: None | SubRoups: 16      */




#endif