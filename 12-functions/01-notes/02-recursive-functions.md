# Recursive Functions

- Recursive functions or Recursion is a process when a function calls a copy of itself to work on a smaller problem.

- Any function which calls itself is called recursive function.

- This makes the life of programmer easy by dividing a given problem into easier problems.

- A termination condition is imposed on such functions to stop them executing copies of themselves forever.

- The case at which function stop recursion is called as base case.

- The instances where the function keeps calling itself to perform a subtask, is called the recursive task.

- For factorial the base case occurs at value 0 or 1.

## Why recursions ?

- Any problem that can be solved recursively , can also be solved iteratively.

- However , some problems are best suited to be solved using recursion.

- For example , tower of Hanoi , Fibonacci series , factorial finding etc.

## What is factorial ?

```
n! = n*n-1*1

3! = 3*2*1 = 6

4! = 4*3*2*1 = 24

0! = 1

n! = n*(n-1)!

```
