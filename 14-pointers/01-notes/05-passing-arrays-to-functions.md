# Passing Arrays To Functions

## Why and how to pass arrays ?

- We pass arrays to a function when we need to pass a list of values to a given functions.

- We can pass the arrays to a function :

1. by declaring array as a parameter in the function
2. By declaring a pointer in the function to hold the base address of the array.

## By declaring array as a parameter in the function.

- Always pass the size of the array to a function while passing the array.

- Arrays are passed by reference , so it we change it somewhere than the orignal array will also get changed.

```c
#include<stdio.h>
/*
Here int arr[] is same as int *arr.
*/
void print_arr(int arr[],size){
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {2,4,5,6,8} ;
    print_arr(arr,5);

    int size = sizeof(arr);
    printf("The size of arr is : %d bytes\n",size); // Output : 20 bytes
    return 0 ;
}
```

## By passing arrays base address to the function

```c
#include<stdio.h>

double calculate_avg(int *arr , int size){
    int sum = 0 ;
    for(int i = 0 ; i < size ; i++){
        sum += *(arr + i) ; // *(arr+i) is same as arr[i].
        // arr[i] does *(arr+i) behind the scenes.arr[i] uses pointer arithmetic to
        // calculate the address and than de-reference it to get the value stored at that location.
        /*
        Here (arr+i) is pointer arithmetic to calculate the array and * is used to de-reference.
        */
    }
    return (sum*1.0/size);
}

int main()
{
    int arr[] = {2,4,5,7,8} ;
    double avg = calculate_avg(arr,5);
    printf("%.3lf\n",avg); // Output : 5.200
    return 0 ;
}
```

```c
#include<stdio.h>
#include<stdint.h>

void func1(int array[],int size){
    for(int i = 0 ; i < size ; i++){
        printf("The value at index %d is %d\n",i , array[i]);
    }
    array[0] = 1000 ;
}

void func2(int *ptr , int size){

    for(int i = 0 ; i < size ; i++){
        printf("The value at index %d is %d\n",i,ptr[i]);
    }

    *(ptr + 2) = 525 ;
}

int func3(int arr[2][2]){
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("The value at %d,%d is %d\n",i,j,arr[i][j]);
        }
    }
}

int main()
{
    int arr[] = {2,3,4,5,6,7,8} ;

    int arr1[][2] = {{2,4},{3,6}};

    printf("The value at index 0 is %d\n",arr[0]);
    // The value at index 0 is 2
    func1(arr,7); // here we are passing base address of the array.
    printf("The value at index 0 is %d\n",arr[0]);
    // The value at index 0 is 1000

    func2(arr,7); // here also we are passing base address of the array only.

    printf("The value at index 2 is %d\n",arr[2]);
    // Output : The value at index 2 is 525

    // passing 2D array to a function.
    func3(arr1);

    return 0 ;
}
```
