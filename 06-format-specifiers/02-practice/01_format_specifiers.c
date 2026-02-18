#include<stdio.h>

int main() 
{
    int a = 8 ; 
    float b = 7.333 ; 
    printf("The value of a is %d and the value of b is %f\n",a,b); 
    // Output : The value of a is 8 and the value of b is 7.333000

    // point k baad 2 decimal point ayenge. 
    printf("%0.2f \n",b); // Output : 7.33

    printf("%10.2f",b); // Output :       7.33
    // Here it will take space for 10 characters including 7 . 3 and 3.So , the space that 
    // we are seeing contains 6 empty spaces.

    printf("%6.4f",b); // Output : 7.3330 (here we have total 6 characters so nothing will happen)

    printf("%7.4f",b); // Output :  7.3330 (here we have total 6 characters and it will take 1 empty 
    // space because total we want to print 7)

    // 6.4f means 6 character k space 4 decimal points ko print krna h. 

    // Note : if we give negative sign to the width than it will take space in the right
    // direction. 

    printf("%-10.4f coding",b); // Output : 7.3330    coding 
    // Here we can see that the number have some empty characters in the left side. 
     
    return 0 ; 
}