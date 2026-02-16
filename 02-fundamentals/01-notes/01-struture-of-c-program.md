# Structure Of C Program

```c
#include<stdio.h>

int main(int argc , char const* argv[])
{
  printf("Hello World\n"); // printing Hello World with new line in standard output
  return 0 ; // returning 0 value to the operating system.
}
```

A typical C program contains following things :-

1. Pre-processor commands : All the statement that starts with # are pre-processor commands.During pre-processing stage these statements are handled by compiler.
2. Functions : it is a reusable piece of code.
3. Variables
4. Statements & expressions
5. Comments

## Structure of c program

1. Header Files

```c
#include<stdio.h>
```

This line is a pre-processor that tells that we want to import the standard input output header file in our program.The stdio.h is a header file.

2. main : it is the entry point of a c program.It is a function that is called by the operating system.A C application/program starts from main() function.Program execution starts from main() function.

3. return 0 : main returns the 0 value to the OS indicating that the program executed successfully.The 0 value goes to the OS as the return value of main() function.

4. code blocks : the curly braces are called as code blocks that contains the statements.

5. printf() : it is a built in function that prints the content in the standard output which is console/terminal.The declaration of printf() is present in stdio.h file and it's definition is present inside the libraries files.

All the statements that starts with # are pre-processor statements.

```c
scanf("%d",&variableName);
```

%d is the format specifier that specifies integer and & is ampersand or address of operator that returns the address of the variable.

## Why main returns 0 ?

main function returns 0 to the operating system indicating that the program executed successfully.

**Note :** The backslash n is a newline character.It is a character only but it is special character that adds a new line or move the cursor to the next line.Escape sequence starts with backslash.
