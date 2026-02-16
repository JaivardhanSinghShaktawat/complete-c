# Setup

- Turbo C and Turbo C++ are discontinued and are not used anymore.
- Install the VSCode , Clion , Eclipse for C/C++ , CodeBlocks
- VSCode is free and open source and developed by Microsoft.

## What are IDE ?

IDE stands for integrated development environment.It is an editor where we write our code.It provides tools like terminal , debugger , extensions , syntax highlighted , syntax checking , autocomplete suggestion , warnings , file system etc integrated together.

## Compiler

It is a program that converts high level language into low level language.

Install the MinG-W in windows and gcc or g++ in linux by using below command.

In MacOS and Linux , gcc/g++ compiler is already installed.

```bash
sudo apt install build-essential # to install gcc and g++ compiler in linux distributions.
```

## How to download Mingw compiler in windows ?

1. Search C programming in VS Code
2. Click on VSCode website link.
3. Click on C++ section and click on Ming-w compiler
4. download it.
5. Set the environment variables.

We need to set environment variables because when we use gcc command than command prompt search for it's meaning in the environment.The bin folder inside Ming-W contains multiple .exe files.The gcc.exe is one of those files that compiles our c code.By setting the environment variables we can use/call the .exe files present in bin folder directly from anywhere because we have already set the path in the environment variables and command prompt will take the path from the environment variables.We can invoke the gcc.exe or other files directly from anywhere provided we have setup the environment variables.

## Types of Compiler

There are many types of C compiler.It is not necessary that we use only Ming-W compiler.

Ming-W is more than enough for us.If we want to create a production ready application than also we can use Ming-W compiler.

## Extensions

Install the C/C++ Intellisense extension from microsoft.

## First Program

```c
#include<stdio.h>

int main(int argc , char const* argv[]){
   printf("Hello World\n");
   return 0 ;
}
```

## How to compile a c file.

gcc file_name.c + enter // it will generate a.out file in MacOS and Linux distributions and a.exe in windows.

a.out and a.exe are the binary files or executable files that are executed by the processor.

a.out + enter or a.exe + enter to run/execute the binary files.

gcc file_name -o binary_file_name (If we want different name of the binary file)

## Shortcuts

Ctrl + plus : to increase the font size

Ctrl + Mouse wheel : to increase/decrease the font size

Ctrl + minus : to decrease the font size
