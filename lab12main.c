/ *** Lab12.c *** //
/** labXX.c
* ===========================================================
* Name: Cleo Cowie, 
* Section: T1-2
* Project: Lesson 12 Lab
* Purpose: Iteration
* ===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab12functs.h"

int main (void) {
    int value; 
    scanf("%d",&value);
    
    int status= isArmstrong(value);

    if (status==1) {
        printf("%d is an Armstrong number.\n", value );
    }
    else {
        printf("%d is not an Armstrong number.\n", value);
    }
    return 0;
}