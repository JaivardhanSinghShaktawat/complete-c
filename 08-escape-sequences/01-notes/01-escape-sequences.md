# Escape Sequence

## What are escape sequence ?

- An escape sequencein C programming language is a sequence of characters.

- It does'nt represent itself when used inside string literal or character.

- It is composed of two or more characters starting with backslash \

- Escape sequence represents a single character.

- For example : \n represents new line.

## Different types of escape sequences

1. \n : it adds a newline or moves the cursor to the next line.
2. \t : it prints a space equal to the tab (horizontal)
3. \a : alarm or beep
4. \b : backspace
5. \f : form feed
6. \r : carriage return
7. \v : Vertical tab
8. \\ : Backslash
9. \' : single quote
10. \" : double quote
11. \? : question mark
12. \nnn : octal number
13. \xhh : hexadecimal number
14. \o : Null

```c
#include<stdio.h>

int main()
{
    printf("\\n"); // Output : \n
    printf("\t"); // Output : tab space
    printf("\a"); // Output : alaram or beep sound
    printf("\'"); // Output : '
    printf("\""); // Output : "

    return 0 ;
}
```
