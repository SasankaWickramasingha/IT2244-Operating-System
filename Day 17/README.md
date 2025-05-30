
# Process Management and Termination in C

This file demonstrates the use of process management functions in C, such as `fork()`, `sleep()`, `exit()`, and `wait()`. It contains multiple small programs aimed at illustrating how processes are created, paused, and terminated.

---

## 📄 File: `exrecise.c`

### ✅ Program 1 – Sleep and Exit

- Demonstrates the use of `sleep()` to pause execution.
- Uses `exit(0)` to indicate successful termination of a program.

### Sample Output:
```
Program started
Sleeping for 3 second...
Exiting the program
```

---

### ✅ Program 2 – Parent and Child Coordination with `wait()`

- Forks a child process.
- The parent process waits for the child to finish using `wait()`.
- The child process sleeps for 2 seconds and exits.
- The parent prints the child's exit status.

### Key Functions:
- `fork()`
- `wait()`
- `WIFEXITED()`

### Sample Output:
```
Parent process started. PID: 1234
child process. PID: 1235, sleeping for 2 seconds...
Parent waiting for child to finish...
Child exited with status 1
Parent process ending
```

---

### ✅ Program 3 – Multiple Children with Sleep

- Creates two child processes.
  - First child sleeps for 1 second.
  - Second child sleeps for 2 seconds.
- Demonstrates concurrent sleep operations in child processes.
- Intended to simulate asynchronous child execution.

### Sample Output:
```
I'm child process. ParentID 1234
Sleeping for 1 second...
Child 1 Exiting.

I'm child 2 process. Parent ID 1234
Sleeping for 2 second...

(parent waits and prints final message if implemented)
```

---

## 🛠 Compilation

Use the following command to compile:

```bash
gcc exrecise.c -o exrecise
```

Note: You may comment/uncomment specific sections to test each program individually.

---

## ▶️ Execution

Run the compiled program using:

```bash
./exrecise
```

Due to asynchronous behavior, output order may vary between runs.

---

## 📋 Notes

- These programs are designed for educational purposes.
- Ensure you are using a Unix/Linux environment to support system calls like `fork()` and `wait()`.

