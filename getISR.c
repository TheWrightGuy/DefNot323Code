/**
 * Grabs ISR info through terminal from user
 * 
 * Author:          Logan Drescher
 * 
 * Date Created:    April 24th, 2019
 * Last Edited:     April 24th, 2019
 */

#include "getISR.h"

ISR getISR(int a){
    ISR tmp;
    printf("Please enter the runtime for ISR%d:\n", a);
    scanf("%d", tmp.runtime);
    printf("Please enter the repititon period for ISR%d\n", a);
    scanf("%d", tmp.period);
    printf("\n\n");
    return tmp;
}