/**
 * Calculates whether or not the inputted 
 * processes can be scheduled safely 
 * 
 * Author:          Logan Drescher
 * 
 * Date Created:    April 24th, 2019
 * Last Edited:     April 24th, 2019
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "main.h"
#include "getISR.h"

int main(){
    // Variables
    int size, i;

    // Get input
    printf("Welcome to the Scheduler Checker\n");
    printf("Please enter the number of ISRs to schedule");
    scanf("%d", &size);

    // Set up ISR holding array
    ISR array[size];
    for (i = 0; i < size; i++){
        array[i] = getISR(i);
    }

    // Calculate an acceptable schedule



    // We're done!
    return 0;
}