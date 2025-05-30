
# Process Creation and Forking in C – Examples

This repository contains a collection of simple C programs to demonstrate the use of the `fork()` system call for process creation in Unix-like operating systems.

## File: `exercise.c`

The file includes three separate programs illustrating different uses of process forking, output generation, and basic inter-process differentiation.

---

## 📘 Program 1 – Basic Fork with Output

- Uses a single `fork()` to create a child process.
- Both parent and child processes print "Hello world".
- Demonstrates how process duplication leads to duplicated execution paths.

### Expected Behavior:
Both parent and child processes will print `Hello world`, possibly resulting in the output appearing twice.

---

## 📘 Program 2 – Identifying Parent and Child Processes

- Demonstrates how to differentiate between the parent and child processes after a `fork()`.
- The child prints its parent’s process ID (`getppid()`).
- The parent prints its own process ID (`getpid()`).

### Output Sample:
```
I'm child process. My parent process id is XXXX
I'm parent process. My id is YYYY
```

---

## 📘 Program 3 – Cooperative Output and Summation

- The child process prints numbers from 1 to 5 and calculates their sum.
- The parent process prints numbers from 6 to 10 and calculates their sum.
- Demonstrates independent tasks by processes running concurrently.

### Output Sample:
```
I'm child process. 1 2 3 4 5
Child process summation: 15

I'm parent process. 6 7 8 9 10
Parent process summation: 40
```

---

## 🛠 Compilation

Use the following command to compile the program:

```bash
gcc exercise.c -o exercise
```

You may comment/uncomment specific program sections before compiling depending on which example you want to test.

---

## ▶️ Execution

To run the compiled program:

```bash
./exercise
```

Note: Since forked processes run independently, the order of output may vary with each run.

---

## 📋 Notes

- These programs are designed for educational purposes to understand basic process creation and handling in C.
- Make sure to run them in a Unix/Linux environment where `fork()` is supported.

