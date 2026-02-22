#include<stdio.h>
#include<string.h>

// We have defined a new user defined data type.
struct Student
{
    int id ; 
    int marks ; 
    char fav_char ; 
    char name[32] ; 
} std1 , std2 ;
// std1 and std2 are variable of Student data type.

// Here s1 is a global variable of Student data type.
struct Student s1 ; 

void print(){
    strcpy(s1.name,"Hello World");
    printf("%s\n",s1.name); // Output : Hello World
}

int main()
{
    // declaring variables of Student data type.
    struct Student c_language , rust_language ; 

    // Initializing the c_language variable of Student data type separately.
    c_language.id = 0 ; 
    c_language.marks = 99 ; 
    c_language.fav_char = 'C' ; 

    // Initializing the rust_language variable of Student data type at once.
    rust_language = {1,100,'R'} ; 

    strcpy(c_language.name,"C programming language"); 

    printf("c_language got %d marks\n",c_language.marks); 

    printf("c_language name is %s\n",c_language.name); 

    // Printing the complete information of c_language variable.

    printf("c_language has id : %d\n",c_language.id); 
    printf("c_language got %d marks\n",c_language.marks); 
    printf("c_language favourite character is %c\n",c_language.fav_char); 

    print(); 

    return 0 ;  
}