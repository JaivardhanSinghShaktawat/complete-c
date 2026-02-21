#include<stdio.h>

// printing character array.
void print_str(char *str){
   int i = 0 ; 
   while(str[i] != '\0'){
     printf("%c",str[i]);
     i++ ; 
   }
   printf("\n");
}

int main()
{
    char str[] = {'h','e','l','l','o'} ; 
    print_str(str); // here we are passing the base address
    /* 
    Here , there is no null character is added at the end so after printing the last 
    character the printf() will print garbage values until it does'nt get null character.
    */

    char str1[] = {'h','e','l','l','o','\0'} ; 
    print_str(str1); 

    char str2[] = "coding is fun" ; 
    print_str(str2); 

    return 0 ; 
}