#include<stdio.h>
#include<string.h>

union Student{
   int id ; 
   int marks ; 
   char fav_char ; 
   char name[34] ; 
};

int main()
{
    union Student s1 ; 
    s1.id = 1 ; ;
    s1.marks = 100 ; 
    s1.fav_char = 'A' ; 
    strcpy(s1.name,"hello world");

    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The favourite character is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);

    /* 
    The id is 1819043176
    The marks is 1819043176
    The favourite character is h
    The name is hello world

    Here all the values are corrupted and only the name is saved.It is because all
    the fields/memeber of union shares the same memory.

    The last field of the union that we have updated will remain saved and all will 
    take garbage values.
    */

    s1.fav_char = 'A' ;

    /* 
    Now , fav_char will take 'A' and all the fields of the union Student will become
    garbage value.
    */

    s1.id = 10 ; 

    /* 
    Now , id will take 10 and all the fields of the union Student will become
    garbage value.
    */

    return 0 ; 
}