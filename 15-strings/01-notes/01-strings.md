# Strings

## What are Strings ?

- It is one of the most important concept.

- String are array of character terminated by NULL character.

- Strings in C is created by creating an array of characters.

- We need an extra character ('\0' or null character) to tell the compiler that the string ends here.

- The null character tells the compiler that the string is ended here.

- So , there is no string data type in C but we create a string like data type by using character array which is a derived data type.

- We use the concept of character arrays to create strings in C.

## is string a data type in C ?

No , string is not a primitive data type.

We have char , int , float and other data types but no 'string' data type in C.

String is not a supported data type in C but it is a very useful concept used to model real world entities like name , city etc.

We express strings using an array of characters terminated by a null character('\0).

## What is a null character and why it is used ?

Null character is a character that tells where the string is terminated.

Null character ASCII value is 0.

It tells that the character array or string is terminated or ended.

The \0 is a escape sequence just like \n.

So , if we write a function to print the character array than we will have to print the character until we don't get the null character.

## Creating strings in C

- We can create a character array in the following ways :

```c
char name[] = "helloworld" ; // here the compiler will add the null character automatically at the end of the string.Compiler will add the null character automatically only if we use double string.

/*
If we are creating string using double quotes than we are requesting from the compiler to add the double quotes at the end of the character array and compiler will add the null character at the end.
*/

char name[] = {'h','e','l','l','o','\0'}; // here we manually have to add the null character because here compiler won't add the null character here.

```

## Taking input in strings

The declaration of fgets() and puts() is present in stdio.h header file.The fgets() is used to take user input and will add null character automatically whereas puts() is used to output the character array or string.

Syntax :

fgets(str_name , sizeof(str_name),stdin);

```c
#include<stdio.h>

int main()
{
    char str[52] ; // The maximum length of the string can be of 52.
    fgets(str , sizeof(str) , stdin);
    puts(str);
    return 0 ;
}
```

```c
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
```
