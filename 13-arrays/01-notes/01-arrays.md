# Arrays

## What is an array ?

- An array is a collection of data items of the same type.

- Items are stored at contiguous memory locations.It means inside the memory the array elements are stored one after another.

- It can also store the collection of derived data types , such as pointers , structures etc.

- A one-dimensional array is like a list.

- A two-dimensional array is like a table.

- The C language places no limits on the number of dimensions in an array.

- Some texts refer to one-dimensional arrays as vectors , two-dimensional arrays as matrices, and use the general term arrays when the number of dimensions is unspecified or unimportant.

## Why we need array ?

We need array to store a large amount of data of the same type.For example , if we want to store 10,000 roll number of students than instead of creating 10,000 variables we will create an array of 10,000 size.

- Code that use arrays is sometimes more organized and readable.

- If you were to store the marks in a test of 56 students , creating 56 variables will make program look cluttered and messy.

- Solution to this is arrays.

- We can create arrays of integers and store the consecutive marks corresponding to the roll number in the array.

## What is base address ?

- It is the address of the first element of the array.

## Advantages

- It is used to represent multiple data items of the same type by using only single name.

- Accessing an item in a given array is very fast.

- 2 Dimensional arrays makes it easy in mathematical applications as it is used to represent a matrix.Ex : matrix multiplication.

## Properties of array

- Data in an array is stored in contiguous memory locations.

- Each element of an array is of same size.

- Any element of the array with given index can be accessed very quickly by using it's address which can be calculated using the base address and the index.

## Syntax for declaring and initializing an array

```
data_type array_name[size] ; // declaring array.

// size not required in this case
data_type array_name[] = {value1,value2,...}; // declaring an initializing an array.

data_type array_name[5] = {1}; // Setting the 0th index element to 1 and all the other values will become 0 automatically.

data_type name[rows][columns] ; // for 2-d arrays

We can also initialize the array one by one by accessing it using it's index.

```

## Disadvantages of using arrays

- Poor time complexity of insertion and deletion operation.

- Wastage of memory since arrays are fixed in size.

- If there is enough space present in the memory but not in contiguous form , you will not be able to initialize your array.

- It is not possible to increase the size of the array , once you have declared the array.

## How to access the array elements ?

- We access the array elements by using the index.

- The index starts with 0.

Syntax :

```
array_name[index] ;
```

```c
#include<stdio.h>

int main()
{
    // declaring an array of size 4 of int type.
    int marks[4] ;

    // declaring and initializing the array at the same time.
    int arr[4] = {2,4,5,6} ; // declaration with initialization.

    marks[0] = 34 ;

    printf("Marks of student 1 is %d\n",marks[0]);
    // Output : Marks of student 1 is 34

    marks[0] = 5 ;
    marks[1] = 42 ;
    marks[2] = 414 ;
    marks[3] = 4 ;

    printf("Marks of student 1 is %d\n",marks[0]);
    // Output : Marks of student 1 is 5

    // using for loop to take input.

    for(int i = 0 ; i < 4 ; i++){
        printf("Enter the marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
    }


    // using for loop to output the result.
    for(int i = 0 ; i < 4 ; i++){
        printf("The marks of student %d is %d\n",i+1,marks[i]);
    }

    // 2D array

    // Note : In 2d array the second value or column size is mandatory.
    int two_d_arr[][4] = {{2,4,5,8},
                          {6,8,10,2}} ;

    int two_d_arr2[2][4] = {{2,4,5,8},
                            {6,8,10,2}} ;

    // printing the elements of the 2d array.

    for(int row = 0 ; row < 2 ; row++){
        for(int col = 0 ; col < 4 ; col++){
            printf("Row = %d and Column = %d and value = %d\n",row+1,col+1,two_d_arr2[row][col]);
        }
    }

    // printing the 2d array in matrix form.

    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("%d ",two_d_arr2[i][j]);
        }
        printf("\n");
    }

    return 0 ;
}
```
