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