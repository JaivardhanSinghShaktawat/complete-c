#include<stdio.h>

int main()
{
    char str[52] ; // The maximum length of the string can be of 52. 
    fgets(str , sizeof(str) , stdin); 
    puts(str); 
    return 0 ; 
}