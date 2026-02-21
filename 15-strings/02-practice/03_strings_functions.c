#include<stdio.h>
#include<string.h>

int main()
{
    char str1[] = "hello" ; 
    char str2[] = " world" ; 
    char str3[52] ; 
    
    puts(strcat(str1,str2)); // Output : helloworld

    puts(str1);

    printf("The length of str1 is : %lu\n",strlen(str1)); 
    // Output : The length of str1 is : 11

    printf("The length of str2 is : %lu\n",strlen(str1)); 
    // Output : The length of str1 is : 6

    // str3 = strcat(str1 , str2); it is wrong and error will come.

    strcpy(str3 ,strcat(str1,str2)); // Here s1 and s2 will be copied into s3 
    
    puts(str3); // Output : hellhello world

    char a[] = "coding" ; 
    char b[] = "is fun" ;
    
    // Here , it is returning the ASCII value difference of first unmatched character.
    printf("The strcmp for s1,s2 returned :  %d \n",strcmp(a,b)); 
    // Output : The strcmp for s1,s2 returned : -6

    return 0 ; 
}

