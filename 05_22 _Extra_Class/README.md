# Fork and Process Demonstration in C

This project contains two simple C programs to demonstrate the use of **fork()** in creating child processes and performing tasks in both parent and child.

---

## 📁 Files

### 1. `01.c`
This program demonstrates the basic usage of `fork()` to create a child process.

#### 🧾 Description:
- The **child process** prints its parent's process ID.
- The **parent process** prints its own process ID.

#### 🧪 Sample Output:
I'm Parent Process. My id is 12345
I'm Child Process. My parent process id is 12345


#### 🛠 Compilation:
```bash
gcc Day_05_22.c -o Day_05_22 

```
### Execution:
```
./Day_05_22

```

### 2. `02.c`
This program splits a task between the parent and child process using fork().

#### 🧾 Description:
- The child process prints numbers from 1 to 5 and calculates their sum.

- The parent process prints numbers from 6 to 10 and calculates their sum.

#### 🧪 Sample Output:
I'm Parent Process
 6  7  8  9  10 
Parent process summation is 40

I'm Child Process
 1  2  3  4  5 
Child process summation is 15

#### 🛠 Compilation:
```bash
gcc Day_05_22.c -o Day_05_22 

```

### Execution:
```
./Day_05_22

```

#### 🧠 Concepts Covered
- fork(): Creating new processes

- getpid() and getppid(): Retrieving process IDs

- Parallel execution of code by parent and child processes

- Basic arithmetic and output formatting




