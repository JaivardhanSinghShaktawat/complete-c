# Operator Precedence

In Maths , we use BODMASS to solve the expressions but in C we use this operator precedence table.

## What is associativity ?

Associativity of an operator is the property that determines how operators of the same precedence are grouped in the absence of parenthesis.

**Note :** We first check the priority/precedence of the operators.If the precedence of the operators are same than we check the associativity of that operator.

```
Category                Operator                            Associativity

Postfix              () [] -> ++ --                        Left to right
Unary              + - ! ~ ++ -- (type)* & sizeof          Right to left
Multiplicative           * / %                             Left to right
Additive              + -                                  Left to right
Shift                  << >>                               Left to right
Relational           < > <= =>                             Left to right
Equality              == !=                                Left to right
Bitwise AND             &                                  Left to right
Bitwise XOR             ^                                  Left to right
Bitwise OR              |                                  Left to right
Logical AND             &&                                 Left to right
Logical OR              ||                                 Left to right
Conditional             ?:                                 Right to left
Assignment        = += -+ *= /= %= >>= <<= &= ^= |=        Right to left
Comma                   ,                                  Left to right
```
