# Logical Operators

## What are Logical Operators ?

They are used to combine two or more expression together to create a condition.

1. Logical AND (&&) : it returns true if all the values are true else it returns false.

```
Value1    Value2     Output

true       true      true
true       false     false
false      true      false
false      false     false
```

2. Logical OR (||) : it returns true if any one value is true else it returns false.

```
Value1    Value2     Output

true       true      true
true       false     true
false      true      true
false      false     false
```

3. Logical NOT (!) : it converts true into false and vice versa.

```
Value1    Output

true       false
false       true
```

```c
#include<stdio.h>

int main()
{
    printf("%d \n",4 && 5); // Output : 1
    printf("%d \n",4 && 0); // Output : 0
    printf("%d \n",4 || 5 || 0); // Output : 1
    printf("%d \n",!4); // Output : 0
    printf("%d \n",!0); // Output : 1


    /*
    Here 1 means true and 0 means false.
    */
    return 0 ;
}
```
