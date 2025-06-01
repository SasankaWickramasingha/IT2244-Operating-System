
# IPC Message Queue Exercises

## Exercise 01 - Basic Message Passing

This exercise demonstrates simple message queue communication using two separate programs: one for sending and one for receiving a message.

### Files:
- **Day19Send.c**: Sends a message using a System V message queue.
- **Day19Receive.c**: Receives a message from the queue.

### How to Run:
1. Create a unique file for `ftok` (e.g., `touch myprogfile` in your home directory on the server).
2. Compile both files:
   ```bash
   gcc Day19Send.c -o sender
   gcc Day19Receive.c -o receiver
   ```
3. Run `./sender` to send a message.
4. Run `./receiver` to receive and display the message.

---

## Exercise 02 - Parent to Child Communication

This exercise demonstrates inter-process communication between a parent and child process using message queues.

### File:
- **parent_child.c**: Parent sends user input data (name, RegNo, age) via message queue, and the child process receives and displays it.

### How to Run:
1. Compile the file:
   ```bash
   gcc parent_child.c -o parent_child
   ```
2. Run the compiled executable:
   ```bash
   ./parent_child
   ```

### Expected Output:
- The parent process prompts for name, RegNo, and age.
- The child process receives the data and displays it.

---

### Note:
Make sure to use the correct path for `ftok`, like: `ftok("/home/2021ict46/myprogfile", 65)`.
