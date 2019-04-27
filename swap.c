/**
 * Swaps two elements in a array
 * 
 * Author:          Logan Drescher
 * 
 * Date Created:    April 24th, 2019
 * Last Edited:     April 24th, 2019
 */

#include "swap.h"

void swap(char *x, char *y){
    char temp = *x; 
    *x = *y; 
    *y = temp; 
}