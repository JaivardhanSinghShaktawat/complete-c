# Compilation Process In C

## Steps of a compilation process in C language

1. Pre-processing : pre-processor is a software/program that handles all the statements starting with # and comments are removed and macros are expanded.It imports all the required header files and resolves all the statements starting with #.The pre-processed output is stored in the .i file.

2. Compilation : The .i file (.i file contains the source code in C and header files content as well as expanded macros) is converted to assembly level language.After compilation the extension of the file becomes .s which contains the assembly level instructions.

practice.s is the file that contains the assembly level instructions.The .s is the extension for assembly language files.

3. Assembly : The .s file is then converted into machine level language.The new file created after assembly process has .o as extension which is called as object file.

4. Linking : The object file is in machine level language but it contains half code.It do not contains the definitions of inbuilt functions , structs , constants.The definition of inbuilt functions , structs are present in library files.Linker is a program that copies the definition of the required inbuilt functions , structs in our object file and after that a new file is created which is a.exe or a.out file which is our executable or binary file.

We have two types of linking i.e static linking and dynamic linking.The .dll files in windows are dynamic linking.

All the commands that starts with hyphen - are called as flags or options.

## Execute this below command

```bash
gcc -Wall -save-temps main.c -o practice
```

Four files will be created i.e practice , practice.i , practice.o , practce.s

practice.i contains the pre-processed content after pre-processing step.The practice.i file contains the C language code only because the compilation process has not happened yet.The practice.i contains the source code and the content of the header files that we are using and the expanded macros.

## Comments

Comments are ignored by the compiler and are used to make code more readable.

```c
int main(int argc , char const* argv[])
{
    // int a ; // single line comment
    /*
    coding is fun and i like doing coding.
    */
}
```

## Compilation process in short

source.c -> pre-processing (header files content added to the source.c , comments are removed and macros are expandend) -> source.i

source.i contains the pre-processed content.

source.i -> compilation (The source.i is converted to assembly level language) -> source.s (.s is the extension of assembly language files)

source.s -> Assembly -> source.o (assembly level instructions are converted to machine level language)

source.o + linker -> a.exe or a.out (linker adds the definition of the inbuilt function , structs etc from the library files to the source.o file and creates the final executable file)
