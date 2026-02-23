#include<stdio.h>

size_t strlen(const char *str){
    size_t len = 0 ; 
    while(str[len] != '\0'){
        len++ ; 
    }
    return len ; 
}

// function to reverse a character array.
// it will mutate the orignal character array and also returns the base address.
char* strrev(char *str){
    if(!str) return NULL ;  // it means str is pointing to nothing.

    int start = 0 , end = strlen(str)-1 ; 
    while(start < end){
        str[start] ^= str[end] ; 
        str[end] ^= str[start] ; 
        str[start] ^= str[end] ; 
        start++ ; end-- ; 
    }

    return str ; // returning the base address.
}

int main()
{
    char str[34] ;
    fgets(str, sizeof(str),stdin);
    str[strlen(str)-1] = '\0' ; // removing the backslash n character.

    char *ptr = strrev(str); 
    printf("Reversed string is : %s\n",ptr);
    printf("Reveresd string is : %s\n",str);

    return 0 ; 
}