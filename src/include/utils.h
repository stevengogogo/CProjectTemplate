/**
 * @file utils.h
 * @author Shao-Ting Chiu (r07945001@ntu.edu.tw)
 * @brief General Utilities for C language
 * @version 0.1
 * @date 2021-03-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef UTILS_H
#define UTILS_H

/**
 * @brief Store extreme value
 * @param extreme extreme value
 * @param arg argument
 */
typedef struct {
    int extreme;
    int arg;
} extm;

/**
 * @brief 
 * 
 * @param a 
 * @param b 
 * @return extm 
 */
extm max(int* a,int* b);
extm min(int*,int*);



#endif