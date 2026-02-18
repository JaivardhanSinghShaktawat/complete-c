# Bitwise Operators

## What are bitwise operators ?

Bitwise operators works directly on bit level.They works on bits.They are much faster as compared to arithmetic operators.

Bitwise operators converts the number into binary number and then they perform operations on the bit level.

```
Bitwise AND (&)
Bitwise OR (|)
Bitwise NOT (~) : it is also called as binary one's complement operator
Bitwise Left Shift (<<)
Bitwise Right Shift (>>)
Bitwise XOR (Exclusive XOR ^)
```

1. Bitwise AND (&) : it returns 1 if all the bits are 1 else it returns 0.

```
a    b     a&b

0    0      0
0    1      0
1    1      1
1    0      0
```

2. Bitwise OR (|) : it returns 1 if any one bit is 1 else it returns 0.

```
a    b     a|b

0    0      0
0    1      1
1    1      1
1    0      1
```

3. Bitwise NOT (negation operator ~) : it flips the bits of the number.

4. Bitwise XOR : it returns 0 if all the bits are of same type else it returns 1.It returns 1 if any one bit is 1 and any one bit is 0.

```
a    b     a^b

0    0      0
0    1      1
1    1      0
1    0      1
```

5. Left Shift (<<) : it shift the bits in the left direction by a specific number.

6. Right Shift (>>) : it shift the bits in the right direction by a specific number.

```c
#include<stdio.h>

int main()
{
    int a , b ;
    a = 2 ;
    b = 3 ;

    // 010 & 011 = 010
    printf("%d\n",a&b); // Output : 2

    // 010 | 011 = 011
    printf("%d\n",a|b); // Output : 3

    // 010 ^ 011 = 001
    printf("%d\n",a^b); // Output : 1

    return 0 ;
}
```
