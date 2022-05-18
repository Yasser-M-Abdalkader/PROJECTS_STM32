/*********************************************************************************
 * @file        NVIC_interface.h
 * @author      Yasssr Mustafa
 * @brief       NVIC Driver - MCAL
 * @version     0.1
 * @date        2022-03-10
 * @copyright   Copyright (c) 2022
*********************************************************************************/

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

/*********************************************************************************
 *  \fn     void MNVIC_voidInit(void) 
 *  \brief  Initiates NVIC with the number of groups and subgroups
 *  \param  None
 *  \return None
 *  \note   This function will be deleted once SCB driver is implemented 
*********************************************************************************/
void MNVIC_voidInit(void);

/*********************************************************************************
 *  \fn     void MNVIC_voidEnableInterrupt(u8 copy_u8IntNumber) 
 *  \brief  Enable External Interrupts
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return None
*********************************************************************************/
void MNVIC_voidEnableInterrupt(u8 copy_u8IntNumber);

/*********************************************************************************
 *  \fn     void MNVIC_voidDisableInterrupt(u8 copy_u8IntNumber) 
 *  \brief  Disable External Interrupts
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return None
*********************************************************************************/
void MNVIC_voidDisableInterrupt(u8 copy_u8IntNumber);

/*********************************************************************************
 *  \fn     void MNVIC_voidSetPendingFlag(u8 copy_u8IntNumber) 
 *  \brief  Set Pending flag for external Interrupts    
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return None
*********************************************************************************/
void MNVIC_voidSetPendingFlag(u8 copy_u8IntNumber);

/*********************************************************************************
 *  \fn     void MNVIC_voidClearPendingFlag(u8 copy_u8IntNumber) 
 *  \brief  Clear Pending flag for external Interrupts    
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return None
*********************************************************************************/
void MNVIC_voidClearPendingFlag(u8 copy_u8IntNumber);

/*********************************************************************************
 *  \fn     u8 MNVIC_u8GetActiveFlag(u8 copy_u8IntNumber)
 *  \brief  Get Active flag status for external Interrupts    
 *  \param  copy_u8IntNumber External interrupt number [0 : 59]
 *  \return on Success, the funtion returns the Active flag status
*********************************************************************************/
u8 MNVIC_u8GetActiveFlag(u8 copy_u8IntNumber);

void MNVIC_voidSetPriority(u8 copy_u8IntNumber, u8 copy_u8Priority);

/*********************************************************************************
 *  \def    MNVIC_GROUP_SUB_DISTRIBUTION
 *  \brief  Choose number of Groups and subgroups for software priority.
 *          the following options are available:    
 *  \li     \c MNVIC_GROUP_4_SUB_0 // Groups: 16   | SubRoups: None
 *  \li     \c MNVIC_GROUP_3_SUB_1 // Groups: 8    | SubRoups: 2
 *  \li     \c MNVIC_GROUP_2_SUB_2 // Groups: 4    | SubRoups: 4
 *  \li     \c MNVIC_GROUP_1_SUB_3 // Groups: 2    | SubRoups: 8
 *  \li     \c MNVIC_GROUP_0_SUB_4 // Groups: None | SubRoups: 16
*********************************************************************************/
#define MNVIC_GROUP_SUB_DISTRIBUTION    MNVIC_GROUP_2_SUB_2   
#endif