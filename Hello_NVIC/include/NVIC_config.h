 /*********************************************************************************
 * @file        NVIC_config.h
 * @author      Yasssr Mustafa
 * @brief       NVIC Driver - MCAL
 * @version     0.1
 * @date        2022-03-10
 * @copyright   Copyright (c) 2022 
 *********************************************************************************/

#ifndef NVIC_CONFIG_H_
#define NVIC_CONFIG_H_
/*********************************************************************************
 *  \def    MNVIC_GROUP_SUB_DISTRIBUTION
 *  \brief  Choose number of Groups and subgroups for software priority.
 *          the following options are available:    
 *  \li     \c MNVIC_GROUP_4_SUB_0 // Groups: 16   | SubGoups: None
 *  \li     \c MNVIC_GROUP_3_SUB_1 // Groups: 8    | SubGoups: 2
 *  \li     \c MNVIC_GROUP_2_SUB_2 // Groups: 4    | SubGoups: 4
 *  \li     \c MNVIC_GROUP_1_SUB_3 // Groups: 2    | SubGoups: 8
 *  \li     \c MNVIC_GROUP_0_SUB_4 // Groups: None | SubGoups: 16
*********************************************************************************/
#define MNVIC_GROUP_SUB_DISTRIBUTION    MNVIC_GROUP_2_SUB_2  

#endif