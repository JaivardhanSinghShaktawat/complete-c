# Basic Syntax Of A C Program

A C program is made up of tokens :-

1. Constants
2. Identifiers
3. String Literals
4. Keywords
5. Symbols

Above one are tokens are only.

## What is token ?

Tokens are the basic building blocks of a C program.
C Program is made up of multiple tokens.
Ex : curly braces , parenthesis , semicolon , keywords , identifiers , constants , symbol , string literal etc are tokens only.

Writig printf("Hello World\n") function in token format.

```c
#include<stdio.h>

int main()
{
    printf
    (
        "Hello World\n" // it is a string literal.
    )
    ;
}
```

But when we write printf() functions than we avoid the multiline and write it in compact form like below way.

```c
printf("Hello World\n");
```

- Statements in C langauge are ended by a semicolon.
- Semicolon is used to terminate the statement in C language.

## Keywords

Keywords are reserved words.

Ex : int , float , if , else , for , struct , typedef , const , return etc.

We can't use keywords to create variables , identifier.

There are 32 keywords in C language.

1. auto
2. break
3. else
4. case
5. char
6. const
7. continue
8. default
9. do
10. double
11. else
12. enum
13. extern
14. float
15. for
16. goto
17. if
18. int
19. long
20. register
21. return
22. short
23. signed
24. sizeof
25. static
26. struct
27. switch
28. typedef
29. union
30. unsigned
31. void
32. volatile
33. while

## Identifiers

Identifiers are the names of the function , variables , structure , enum , union which helps us to identify them.

Variables , functions k naamko identifer bolte h which helps us to identify them.

**Note :** C is a case sensitive programming language.

0 is a constant.

"Hello World\n" is a string literal.

## Symbols

These are the symbols like ampersand (address of operator)

**Note :** We can add any amount of whitespaces between tokens.Below program will compile with no issues.

```c
int main  ()  {
    printf


    (   "Hello World\n"   )   ;
    return


    0 ;
}
```
