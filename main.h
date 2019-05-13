#ifndef MAIN_H
#define MAIN_H

/**
 * Headder to code that calculates whether or not the 
 * inputted processes can be scheduled safely 
 * 
 * Author:          Logan Drescher
 * 
 * Date Created:    April 24th, 2019
 * Last Edited:     April 24th, 2019
 */

typedef struct {
    int period;         // The length of time before the ISR needs to be invoked again
    int runtime;        // The length of the ISR's runtime
    int interruptNumber; // ISRx
} ISR;


#endif//MAIN_H