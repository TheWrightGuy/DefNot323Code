/**
 * Checks whether or not the current scheduling would work 
 * 
 * Author:          Logan Drescher
 * 
 * Date Created:    April 24th, 2019
 * Last Edited:     April 24th, 2019
 */

#include "schedule.h"

void schedule(ISR *inters, int size, int CR, int LI){
    // Test first equation
    int i, sum = 0;
    for(i = 0; i < size; i++){
        ISR tmp = *(inters + i);
        sum += 100 * (tmp.runtime) / tmp.period;
    }
    if (sum > 100){
        printf(); //TODO: Determine "fail" printout
    }
}