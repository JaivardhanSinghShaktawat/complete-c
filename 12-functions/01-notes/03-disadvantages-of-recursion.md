# Disadvantage Of Recursion

## Why is recursion not always good or Why was recursive approach slow ?

If we use recursion to solve the problem , than there are mutliple function calls happen with the same input value.So , recursion calls the same function with the same input value and which takes more time.As a result the program takes more time.Recursion solves the same sub-problems with same value multiple times which takes more time.

That's why the recursive fibonnaci function is slower as compared to the iterative fibonacci number.

## Conclusion

- Recursion is a good approach when it comes to problem solving.

- However , programmer needs to evaluate the need and impact of using recursive/iterative approach , while solving a particular problem.

- In case of factorial calculation , recursion saved a lot of lines of code.

- However , in case of Fibonacci series , recursion resulted in some extra unnecessary function calls which was an extra overhead.

- Running time for Fibonacci series grows exponentially with input in case of recursive approach.
