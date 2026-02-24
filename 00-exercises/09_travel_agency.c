/* 
You manage a travel agency and you want your drivers to input their following details:

1. Name 
2. Driving License Number
3. Route (string)
4. Km drived

Your program should be able to take n as input and your drivers will start inputting 
their details one by one.

You program should print details of the drivers in a beautiful fashion. 

Hint : use structures.

Try to assume n as 3 and than solve it.
*/

#include<stdio.h>
#include<string.h>

struct Driver{
   char name[32] ;
   char driving_license_no[32]; 
   char route[32] ; 
   float km_drived ; 
};

int main()
{
    const int number_of_drivers = 3 ; 

    struct Driver drivers[number_of_drivers] ; 

    printf("Enter the details of the drivers\n\n");
    for(int i = 0 ; i < number_of_drivers ; i++){
        printf("************** Enter the details of %d driver ******************\n\n",i+1);

        printf("Enter the name of the %d driver : ",i+1);
        fgets(drivers[i].name,sizeof(drivers[i].name),stdin); 

        printf("\n");

        printf("Enter the driving license number of the %d driver : ",i+1);
        fgets(drivers[i].driving_license_no,sizeof(drivers[i].driving_license_no),stdin);

        printf("\n");

        printf("Ente the route of the %d driver : ",i+1); 
        fgets(drivers[i].route,sizeof(drivers[i].route),stdin); 

        printf("\n");


        printf("Enter the kilometers drived by the %d driver : ",i+1); 
        scanf("%f",&drivers[i].km_drived); 

        printf("\n");


        getchar(); 
    }
   
    printf("\n\nPrinting the details of each driver\n\n");

    for(int i = 0 ; i < number_of_drivers ; i++){
        printf("************** Printing the details of %d driver ******************\n\n",i+1);
        printf("The name of the %d driver is : %s\n",i+1,drivers[i].name);
        printf("The driving license of the %d driver is : %s\n",i+1,drivers[i].driving_license_no);
        printf("The route of the %d driver is : %s\n",i+1,drivers[i].route);
        printf("The number of kilometers drived by the %d driver is : %.3f\n\n",i+1,drivers[i].km_drived);
    }

    printf("\n\n");

    return 0 ; 
}