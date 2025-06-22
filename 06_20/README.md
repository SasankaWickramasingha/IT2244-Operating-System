## Multithreading in C - Exercises

This repository contains a collection of C programs demonstrating various multithreading concepts using the POSIX `pthread` library.

---

## 🔧 Compilation & Execution

To compile each file:
```bash
gcc thread_XX.c -o thread_XX -pthread
./thread_XX
```
Replace `XX` with the corresponding question number.

---

## 🧩 Exercise Overview

### ✅ Q1: Basic Thread Execution
- **Description**: Create two threads. Each prints a message indicating it is running. The main thread waits for both to finish.
- **Filename**: `thread_01.c`

### ✅ Q2: Multiple Threads with IDs
- **Description**: Create 5 threads. Each prints its own thread ID. The main thread joins all and prints a final message.
- **Filename**: `thread_02.c`

### ✅ Q3: Counting with Delay
- **Description**: A thread prints numbers from 1 to 10 with a 1-second delay. The main thread waits until it finishes.
- **Filename**: `thread_03.c`

### ✅ Q4: Shared Counter Manipulation
- **Description**: Two threads increment and decrement a global counter 100 times. Final value printed by the main thread.
- **Filename**: `thread_04.c`

### ✅ Q5: Returning Value from Thread
- **Description**: A thread squares an integer and returns the result using `pthread_exit`. The main thread prints the result.
- **Filename**: `thread_05.c`

---

## 🛠 Requirements

- GCC compiler
- POSIX-compliant system (Linux, Unix, macOS, WSL, etc.)

---

## 📌 Notes

- Use `-pthread` flag during compilation to link the pthread library.
- Proper synchronization (e.g., mutexes) is not used in Q4. This is intentional for simplicity and educational purposes.

---


