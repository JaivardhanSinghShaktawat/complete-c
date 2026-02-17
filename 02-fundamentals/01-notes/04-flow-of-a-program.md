# Flow of a C program

## Below is the flow of a C program.

**Pre-processing -> Compilation -> Assembly -> Linking -> Loading**

1. Pre-processing : It resolves all the statements that starts with hash.Comments are removed , macros are expanded and header files content is imported in our program.

The file_name.i is created during this process which contains the pre-processed content with our source code.

2. Compilation : The file_name.i is compiled to assembly level language code and file_name.s is created.

3. Assembly : The file_name.s or assembly level language code is converted to machine level language code and an object file is created i.e file_name.o

The assembler converts the assembly level language code into object file.

4. Linking : linker copies or moves the definition of the pre-defined functions from the library files to the object file and creates the final executable file i.e a.exe or a.out file.

5. Loading : The a.exe or a.out file is loaded in RAM for it's execution.

**Note :** In , programming the memory generally refers to the RAM where programs are loaded or executed or run.Programs are loaded first in RAM before execution.If you have more RAM than we can load multiple programs.
