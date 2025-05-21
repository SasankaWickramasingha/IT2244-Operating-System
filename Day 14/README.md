# Conditions.c - C Programming Examples

This repository contains a collection of basic C programs demonstrating the use of conditional statements, loops, and fundamental algorithms. Each section in `Conditions.c` is a separate example, designed to help beginners understand core programming concepts in C.

## Contents

### 01.c - If-Else Condition
Prompts the user to enter their age and checks if they are eligible to vote.
- **Condition**: Age ≥ 18
- **Invalid Input Handling**: Age < 0

### 02.c - Ternary Operator
Performs the same voting eligibility check using the ternary (`? :`) operator.
- Syntax used: `condition ? expr1 : expr2`

### 03.c - Switch Case: Day of the Week
Asks the user to enter a number between 1 to 7 and displays the corresponding day of the week.
- **Example**: `1 → Sunday`, `7 → Saturday`

### 04.c - Life Path Number (Mini Astrology App)
Calculates a "life path number" from the day of the month provided by the user and returns a short phrase.
- **Calculation**: `life_path = (date % 10) + (date / 10)`
- Uses `switch` to return predefined messages based on the life path number (1–9).

### 05.c - Fibonacci Series
Generates the Fibonacci sequence up to a number specified by the user.
- Uses a `while` loop to print numbers in the sequence.

### 06.c - Factorial Calculation
Calculates the factorial of a positive number using a `for` loop.
- **Input Validation**: Rejects negative numbers.

## How to Compile and Run

Use a C compiler like `gcc`. Example:

```bash
gcc -o program Conditions.c
./program
```

Note: Each example is written as a separate `main()` function in the same file. To run an individual example, copy that section into a new file or comment out the others.


