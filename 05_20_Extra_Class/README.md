# Process Creation Using `fork()` in C

This project demonstrates the use of the `fork()` system call in C to create and manage multiple processes. It contains two C programs (`01.c` and `02.c`) that help visualize how process IDs and parent-child relationships work.

---

## 📁 Files

### 1. `01.c` – Basic Fork Demonstration

#### 🧾 Description:
- Demonstrates how `fork()` creates a child process.
- Both the parent and child print their Process IDs and the value returned by `fork()`.

#### 🧪 Sample Output:
I'm child process
The pid is 1235
The fork is 0

I'm Parent process
The pid is 1234
The fork is 1235


> The child receives `0` from `fork()`, while the parent receives the child's PID.

#### 🛠 Compilation:
```bash
gcc Day_05_20.c -o Day_05_20 
```
#### Execution:
```
./Day_05_20

```

### 2. `02.c` – Creating a Process Tree (A → B and A → C)

#### 🧾 Description:
- The main process A creates:

- A child process B.

- Another child process C.

- Each process prints its identity and parent process ID (using getppid()).

#### 🧪 Sample Output:

I'm B
My parent ID is : 1234

I'm C
My parent ID is : 1234

I'm A
My ID: 1234

- All processes may not print in the same order every time due to concurrent execution.

#### 🛠 Compilation:
```bash
gcc Day_05_20.c -o Day_05_20 
```
#### Execution:
```
./Day_05_20

```

#### 🧠 Concepts Covered
- fork() – used to create child processes.

- getpid() – gets the current process ID.

- getppid() – gets the parent process ID.

- Basic process tree creation.

- Order of output may vary due to asynchronous process scheduling.







