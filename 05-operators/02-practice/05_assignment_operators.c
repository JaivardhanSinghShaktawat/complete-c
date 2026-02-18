#include<stdio.h> 

int main()
{
    int a , b ; 
    a = 2 , b = 4 ; 

    a += 6 ; // a  = a + 2 = 8 
    a -= 5 ; // a = a - 5 = 3
    a *= 2 ; // a = a * 2 = 6
    a /= 2 ; // a = a / 2 = 3
    a %= 2 ; // a = a % 2  = 1

    printf("%d",a);

    return 0 ; 
}