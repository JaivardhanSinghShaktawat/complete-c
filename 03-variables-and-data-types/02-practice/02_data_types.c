#include<stdio.h>

int main()
{
    // Calculating sizes of different data types.

    printf("%lu \n",sizeof(short)); // Output : 2    
    printf("%lu \n",sizeof(int)); // Output : 4    
    printf("%lu \n",sizeof(long)); // Output : 8    
    printf("%lu \n",sizeof(char)); // Output : 1     
    printf("%lu \n",sizeof(float)); // Output : 4     
    printf("%lu \n",sizeof(double)); // Output : 8     

    // basic data types examples
   
    int num = 10 ; 

    short small_num = 3 ; 

    long big_num = 343453543434 ; 

    char ch = 'a' ; 

    float f = 4.678 ; 

    double d = 3.4567 ; 

    long double long_d = 4.232345343434434343 ; 

    return 0 ; 
}