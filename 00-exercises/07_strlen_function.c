#include<stdio.h>

size_t strlen(const char *str){
    size_t len = 0 ; 
    while(str[len] != '\0'){
        len++ ; 
    }
    return len ; 
}

int main()
{
    char str[32] ; 
    fgets(str , sizeof(str),stdin); 
    str[strlen(str)-1] = '\0' ; 
    int len = strlen(str);
    printf("The length of the string is : %d\n",len);
    return 0 ; 
}