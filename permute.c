/**
 * Permutes through a given (sub)string, calling 
 * 
 * Author:          Logan Drescher
 * Reference from:  https://www.geeksforgeeks.org
 *                      /write-a-c-program-to-print-all-permutations
 *                      -of-a-given-string/
 * 
 * Date Created:    April 24th, 2019
 * Last Edited:     April 24th, 2019
 */
#include "permute.h"

void permute(ISR *array, int size, int lowerBound, int upperBound, int CR, int LI){
    int i;
    if (lowerBound == upperBound){
        schedule(array, size, CR, LI);
    } else {
        for(i = lowerBound; i < upperBound; i++){
            swap(array + lowerBound, array + i);
            permute(array, size, lowerBound + 1, upperBound, CR, LI);
            swap(array+lowerBound, array+i);
        }
    }
}