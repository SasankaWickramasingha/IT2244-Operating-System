
# Process Creation in C – Fork Examples

This repository contains examples of basic process creation in C using the `fork()` system call. These programs demonstrate how parent and child processes behave in Unix-like operating systems.

## Files

### `exercise.c`

This file contains two separate C programs that illustrate how `fork()` can be used to create new processes and how process IDs (`pid`) and parent process IDs (`ppid`) can be used to identify them.

---

## 📘 Program 1

This section of the code demonstrates:

- How a single `fork()` creates a child process.
- How both the parent and child processes can identify themselves and display their process ID and `fork()` return value.

### Output Behavior:
- The parent and child processes print different messages.
- Each process displays its own process ID.
- The return value of `fork()` helps determine whether the current execution context is the child or parent.

---

## 📘 Program 2

This section of the code demonstrates:

- A slightly more complex process tree:
  - One initial fork creates process B.
  - The parent then forks again to create process C.
- This results in three processes: A (original), B, and C.

### Output Behavior:
- Each process (A, B, and C) prints its identity and relevant process IDs.
- Demonstrates how to get parent process ID using `getppid()`.

---

## 🛠 Compilation

To compile either program:

```bash
gcc exercise.c -o exercise
```

> You may comment/uncomment specific sections of the code before compiling if you want to run only one program at a time.

---

## ▶️ Execution

Run the compiled program using:

```bash
./exercise
```

You may see different output orders on different executions due to the asynchronous nature of process scheduling.

---

## 📋 Notes

- This example is intended for educational purposes to understand process creation using `fork()` in Unix-based systems.
- Ensure your system supports `fork()` (most Unix/Linux systems do).
