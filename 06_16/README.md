# Multithreading in C using Pthreads

This project demonstrates the use of multithreading in C using the POSIX `pthread` library. It includes several exercises showcasing how threads are created, executed, and synchronized.

## Files

- **exercise.c**: Contains four separate code snippets demonstrating multithreading in C.

## Exercises

### 1. Basic Thread Creation

A simple program that:
- Prints a message before and after a thread runs.
- The thread prints "Hello World".

### 2. Multiple Threads Example

Demonstrates:
- Creating two threads with different messages.
- Each thread prints its own message.

### 3. Array of Threads

Illustrates:
- Creating three threads from an array.
- Each thread prints a different message from an array of strings.

### 4. Parallel Sum Calculation

Performs:
- Division of an array into two halves.
- One thread calculates the sum of the first half, another the second half.
- Results are added to show the total sum.

## How to Compile

Use `gcc` and link with the `-pthread` option:

```bash
gcc exercise.c -o exercise -pthread
```

## How to Run

```bash
./exercise
```

Note: You may need to comment/uncomment specific blocks in `exercise.c` to test them individually, as they are multiple `main()` functions.

## Requirements

- GCC compiler
- POSIX compliant system (Linux, macOS)
- Basic knowledge of C programming


