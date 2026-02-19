/* 
Convert the units.

1. km to miles 
2. inches to foot 
3. cms to inches
4. pound to kgs 
5. inches to meter

*/

#include<stdio.h>
#include<stdbool.h>

// constants
const double KM_TO_MILES  = 0.6213712; 
const double INCH_TO_FEET = 0.08333333 ; 
const double CM_TO_INCH  = 0.3937008 ; 
const double POUND_TO_KG = 0.4535924 ; 
const double INCH_TO_METER =   0.0254 ; 

// function declaration.
double km_to_miles(const double);
double pound_to_kg(const double);
double inches_to_foot(const double);
double inches_to_meter(const double);
double cm_to_inches(const double);

int main()
{
    int type ; 
    double val , res ; 

    while(true){
        printf("\n\nSelect what conversion you want to perform.\n\n");
        printf("Type 1 for km to miles\n");    
        printf("Type 2 for inches to foot\n");    
        printf("Type 3 for cm to inches\n");    
        printf("Type 4 for pound to kg\n");    
        printf("Type 5 for inches to meter\n"); 
        printf("Type -1 to quit\n\n"); 
    
        scanf("%d",&type); 

        switch(type){

            case 1 :  
                      printf("Enter the value in km : ");
                      scanf("%lf",&val);
                      res = km_to_miles(val); 
                      printf("%.3lf km is equal to %.3lf miles\n",val,res); 
                      break ; 

            case 2 : 
                      printf("Enter the value in inches : ");  
                      scanf("%lf",&val);
                      res = inches_to_foot(val); 
                      printf("%.3lf inches is equal to %.3lf foot\n",val,res); 
                      break ; 

            case 3 : 
                      printf("Enter the value in centimeter : "); 
                      scanf("%lf",&val);
                      res = cm_to_inches(val); 
                      printf("%.3lf cm is equal to %.3lf inches\n",val,res); 
                      break ; 

            case 4 : 
                      printf("Enter the value in kg : "); 
                      scanf("%lf",&val);
                      res = pound_to_kg(val); 
                      printf("%.3lf pound is equal to %.3lf kg\n",val,res); 
                      break ; 
            

            case 5 : 
                      printf("Enter the value in inches : "); 
                      scanf("%lf",&val);
                      res = inches_to_meter(val); 
                      printf("%.3lf inches is equal to %.3lf meter\n",val,res); 
                      break ; 
            
            case -1  : 
                      printf("Quitting program....\n");
                      goto end ; 
            default : 
                     printf("Plese select option between 1 to 5\n");              
     
            }
    }
    end: 

    return 0 ; 
}

double inches_to_foot(const double val){
    return INCH_TO_FEET*val ; 
}
double pound_to_kg(const double val){ 
    return POUND_TO_KG*val ; 
}

double inches_to_meter(const double val){
    return INCH_TO_METER*val ; 
}

double km_to_miles(const double val){
    return KM_TO_MILES*val ; 
}

double cm_to_inches(const double val){
    return CM_TO_INCH*val ; 
}