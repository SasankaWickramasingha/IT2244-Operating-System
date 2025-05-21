# Conditions.c - C Programming Examples

This repository contains a collection of basic C programs demonstrating the use of conditional statements, loops, and fundamental algorithms. Each section in `Conditions.c` is a separate example, designed to help beginners understand core programming concepts in C.

## Contents

### 01.c - If-Else Condition
Prompts the user to enter their age and checks if they are eligible to vote.
- **Condition**: Age ≥ 18
- **Invalid Input Handling**: Age < 0
![1](https://github.com/user-attachments/assets/bf325cb9-560b-4869-b723-7ee60cff130d)

### 02.c - Ternary Operator
Performs the same voting eligibility check using the ternary (`? :`) operator.
- Syntax used: `condition ? expr1 : expr2`
![2](https://github.com/user-attachments/assets/6f34bb1b-46f7-4477-9591-f78ef092ef7a)

### 03.c - Switch Case: Day of the Week
Asks the user to enter a number between 1 to 7 and displays the corresponding day of the week.
- **Example**: `1 → Sunday`, `7 → Saturday`
![3](https://github.com/user-attachments/assets/bb1b4cf3-4ad4-47f9-9db1-88995cef48d8)

### 04.c - Life Path Number (Mini Astrology App)
Calculates a "life path number" from the day of the month provided by the user and returns a short phrase.
- **Calculation**: `life_path = (date % 10) + (date / 10)`
- Uses `switch` to return predefined messages based on the life path number (1–9).
![4](https://github.com/user-attachments/assets/9154bd9b-2029-4641-905c-4215eda549ed)

### 05.c - Fibonacci Series
Generates the Fibonacci sequence up to a number specified by the user.
- Uses a `while` loop to print numbers in the sequence.
![5](https://github.com/user-attachments/assets/9de774ec-f5bf-4230-b821-d741690456ce)

### 06.c - Factorial Calculation
Calculates the factorial of a positive number using a `for` loop.
- **Input Validation**: Rejects negative numbers.
![6](https://github.com/user-attachments/assets/57edbd0e-e7c0-46e6-a7a3-3b2a03b46eb4)

## How to Compile and Run

Use a C compiler like `gcc`. Example:

```bash
gcc -o program Conditions.c
./program
```

Note: Each example is written as a separate `main()` function in the same file. To run an individual example, copy that section into a new file or comment out the others.


