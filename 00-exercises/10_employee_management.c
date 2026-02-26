/* 
A company "a" manages employee records of other companies.Employee Id can be of any
length and it can contain any number of characters.For 3 employees you have to take the
length of the employee id as input in a length integer variable then , you have to 
take employee id as an input and display it on the screen.

Store the employee id in a character array which is allocated dynamically.You have 
to create only one character array dynamically and need to re-allocated it again 
after printing the taking input and outputing the employee id. 

Input : 

Employee 1 

Enter the length of the Id for employee 1 : 5 

Enter the Id for employee 1 : hello

The Id for employee 1 is : hello 


Employee 2 

Enter the length of the Id for employee 2 : 5 

Enter the Id for employee 2 : hello

The Id for employee 2 is : hello 


Employee 3 

Enter the length of the Id for employee 3 : 5 

Enter the Id for employee 3 : hello

The Id for employee 3 is : hello 

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    const int TOTAL_EMPLOYEES = 3 ; 

    char *ptr ; // declaring a pointer.
    int id_length ; 

    for(int i = 0 ; i < TOTAL_EMPLOYEES ; i++){
        printf("******* Employee %d *********\n\n",i+1); 
        printf("Enter the length of the ID for the Employee %d : ",i+1); 
        scanf("%d",&id_length); 

        // it will take the '\n' as input left by the scanf() in the input buffer.
        getchar(); // it takes character as input.

        if(id_length < 1){
            printf("Plese enter the correct id_length\n\n");
            continue; 
        }

        ptr = (char*)malloc(sizeof(char)*(id_length+1));

        ptr[id_length+1] = '\n' ; 

        int ind = 0 ; 
        char ch ; 

        while(ind < id_length && (ch = getchar()) != '\n'){
            *(ptr+ind) = ch ; 
            ind++ ; 
        }

        *(ptr+ind) = '\0' ; 

        printf("The ID for employee %d is : %s\n\n",i+1,ptr);
        free(ptr); 
    }

    return 0 ; 
}