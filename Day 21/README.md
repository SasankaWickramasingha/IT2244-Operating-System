# Shared Memory Communication in C

This project demonstrates **Inter-Process Communication (IPC)** using **shared memory** in C. It includes two main approaches:

1. **System V Shared Memory** (using `shmget`, `shmat`, `shmdt`, `shmctl`)
2. **POSIX Shared Memory** (using `mmap` with `fork`)

---

## 📁 Files

### 1. `Day21Writer.c` and `Day21Reader.c`
These two programs use **System V shared memory** to write and read messages between two separate processes.

#### Compilation:
```bash
gcc Day21Writer.c -o Day21Writer
gcc Day21Reader.c -o Day21Reader
```

#### Execution:
```bash
./Day21Writer    # Run first to write a message
./Day21Reader    # Run second to read the message
```

**Note**: Both programs must use the same key file path `/home/2021ict46/myprogfile` for `ftok()`. Ensure this file exists:
```bash
touch /home/2021ict46/myprogfile
```

### 2. `Day21.c`
This program demonstrates shared memory using **anonymous memory mapping (mmap)** and `fork()` to create a child process.

#### Compilation:
```bash
gcc Day21.c -o Day21
```

#### Execution:
```bash
./Day21
```

**How it works:**
- The child writes a message to shared memory.
- The parent waits for the child and reads the message.

---

## 📌 Requirements

- GCC Compiler
- Linux or Unix-based OS
- User must have permission to access or create `/home/2021ict46/myprogfile` for `ftok()`

---

## 🧹 Cleanup

System V shared memory segments may persist after execution. To manually remove them:
```bash
ipcs -m         # List shared memory segments
ipcrm -m <shmid>  # Remove specific segment
```

Or let the reader program handle it via:
```c
shmctl(shmid, IPC_RMID, NULL);
```

---

## 🧠 Concepts Covered

- Shared memory (System V and POSIX)
- `ftok`, `shmget`, `shmat`, `shmdt`, `shmctl`
- `mmap`, `fork`, `wait`
- Basic process synchronization

---

