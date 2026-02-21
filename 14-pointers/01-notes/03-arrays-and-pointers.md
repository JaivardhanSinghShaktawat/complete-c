# Arrays And Pointers

- Consider the following declaration

```
int arr[10] ;
```

- What is type of arr ?

It is an integer array.

- However , arr by itself , without any index subscripting can be assigned to an integer pointer.

We can assign the array to an integer pointer.The array name is called as base address which returns the base address of the array.

```c
int arr[] = {1,2,3,4,5} ;
int *ptr = arr ; // here arr contains the base address or address of the first element
// of the array.

printf("Printing arr = %p\nPrinting ptr = %p\n",arr,ptr);
```

```
What type does arr[i] have ?

It's type is integer because arr[i] is same as *(arr + i).

arr[i] = *(arr+i)


arr[i] uses pointer arithmetic to give array element values.

if arr is a pointer to arr[0] then arr + i is a pointer to arr[i]

```

## How array calculates the address of an element by index ?

address of ith index = base address (array name) + sizeof(data type of array)\*index ;

**Note :** The size of the data type depends upon the architecture (32bit or 64bit) and compiler.

**Note :** We can't do array_name++ or arr++ because it is a constant.arr is a pointer and is constant that will always points to the first element of the array.
We can't do arr++ with original array name because it is constant.We can do like this

```c
int arr[] = {2,4,6,8} ;
// arr++ ; error will come
// arr-- ; // error will come
// arr = arr + 1; // error will come
// arr = arr - 1; // error will come

int *ptr = arr - 1 ; // it is valid
int *ptr1 = arr + 1 ; // it is valid
```

```c
#include<stdio.h>
#include<stdint.h>

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
```
