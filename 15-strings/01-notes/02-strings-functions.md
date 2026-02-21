# String Functions

The header string.h contains the inbuilt string functions that we can use.

## Functions present in string.h header file

1. strcat() : it is used to concatenate or combine two given strings.cat means concatenation.

```c
char str1[] = "hello" ;
char str2[] = " world" ;
puts(strcat(str1,str2)); // Output : helloworld
puts(str1); // Output : helloworld

```

2. strlen() : it returns the length of the string.It does'nt count the null character in the length.It returns the number of character in integers except null character.

Syntax :

strlen(str_name);

3. strcpy() : this function is used to copy one string into another.It stands for string copy.

strcpy(s1 , s2);

Here , s2 will be copied into s1.

4. strcmp() : it is used to compare two given strings.It returns an integer.It stands for string comparison.It returns the ASCII difference between the first unmatching character.

Ex :

strcmpt("salt","tight");

Here , s and t are unmatched character.So, strcmp() will return the ASCII difference of s and t character.

ASCII of s is x

ASCII of t is y

So , strcmp() will return abs(x-y)

If the both string are equal and matches than strcmp() returns 0.If s1 first unmatched character with s2 is smaller than strcmp() returns -1.Otherwise , it returns 1.

In some compilers , strcmp() returns the ASCII difference of first unmatched characters in s1 and s2 and in some compilers it returns 0 , -1 or 1

```c
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
```
