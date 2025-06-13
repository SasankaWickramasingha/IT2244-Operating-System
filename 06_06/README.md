# C Program: Parent-Child Communication Using Pipes

This C program demonstrates **Interprocess Communication (IPC)** using **pipes** between a parent and child process. It showcases how data can be sent from the parent process to the child process in a simple and effective way.

---

## 📝 Program Description

### ✅ Functionality

1. The **parent process** prompts the user to input:
   - Name
   - Registration Number
   - Age

2. It then **sends** this information to the **child process** using a **pipe**.

3. The **child process** reads the data from the pipe and **displays** it.

---

## 💻 How to Compile and Run

### 🛠 Compilation

Use GCC to compile the code:

```bash
gcc exercise.c -o exercise
```

### ▶️ Execution

Run the compiled executable:

```bash
./exercise
```

---

## 📌 Sample Output

```
Enter name: Malindu 
Enter registration number: 2021ICT46
Enter age: 24

Child Process Output:
Name: Malindu 
Registration Number: 2021ICT46
Age: 24
```

---

## ⚠️ Important Notes

- The program uses `scanf(" %[^
]", ...)` to read entire lines including spaces.
- `pipe()` creates a communication channel between processes.
- `fork()` is used to create a child process.
- `write()` and `read()` functions handle communication through the pipe.

---

## 📂 File Structure

- `exercise.c`: Source file containing the full implementation of the parent-child pipe communication.

---



