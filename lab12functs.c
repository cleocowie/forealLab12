/* lab12functs.c 
* ===========================================================
* Name: Cleo Cowie
* Section: T1-2
* Project: Lab 12
* Purpose: Iterations
* ===========================================================
*/

#include "lab12functs.h"
#include <math.h>

 int isArmstrong(int value) {
     int remainder;
     int sum=0;
    
     printf("Enter number to see if its an Armstrong number.\n");


     while (value!=0) {

         remainder= value % 10;
         sum=sum+(pow(remainder,3));
         value=value/10;
     }

        if (value==sum) {
            return 1;
        }
        else {
            return 0;
        }
 }
