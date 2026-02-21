#include<stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5} ; 
    int *ptr = arr ; // here arr contains the base address or address of the first 
    // element of the array. 

    printf("Printing arr = %p\n",arr);
    printf("Printing ptr = %p\n",ptr);
    printf("Printing &arr[0] = %p\n",&arr[0]); // arr[0] is same as *(arr + 0)
    printf("Printing arr[0] = %d\n",arr[0]);    
    printf("Printing *(arr+0) = %d\n",*(arr+0)); // arr[i] is same as *(arr+i)    
    printf("Printing *arr = %d",*arr); 
    printf("Printing *(&arr[2]) = %d",*(&arr[2])); 

    /* 
    Output : 
    Printing arr = address in hexadecimal format
    Printing ptr = same address as above.   
    Printing &arr[0] = same address as above
    Printing arr[0] = 1 
    Printing *(arr+0) = 1 
    Printing *arr = 1 (arr is pointing to the first element of the array and we are 
    de-referencing it here.)
    Printing *(&arr[2]) = 3

    Hence , arr , ptr and &arr[0] points to the same base address or address of the 
    first element of the array.
    */

    return 0 ; 
}