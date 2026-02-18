#include<stdio.h>

#define MAX_VAL 20
#define SPEED_OF_LIGHT 3.24*10e5

int main()
{
    // using const keyword to define constants variables.
    const float PI = 3.4 ;
    // PI = 46 // error will come , we can't mutate constant variables.

    /*
    MAX_VAL = 40 error will come as we can't mutate them
    Here during pre-processing compiler will put 20 in place of MAX_VAL so
    20 = 40 will become invalid.
    */

    /*
    SPEED_OF_LIGHT = 10  error will come as we can't mutate them.Here during pre-processing compiler will put 3.24*10e5 in place of SPEED_OF_LIGHT so 3.24*10e5 = 10 will become invalid.
    */
    return 0 ;
}