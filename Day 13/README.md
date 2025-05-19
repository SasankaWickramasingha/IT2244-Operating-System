# C Programming Basics

This collection of simple C programs is designed to introduce foundational concepts including output, variable handling, input/output, data types, and basic arithmetic operations.

---

## 📝 File Summaries

### `01.c` – Hello World
Prints "Hello World!" to the console.

**Compilation:**
```bash
gcc 01.c -o 01
./01
```

---

### `02.c` – Integer Output
Declares an integer and prints it using the `%d` format specifier.

**Format Specifier Notes:**
- `%d` or `%i` — Integer
- `%f` — Float
- `%c` — Character
- `%lf` — Double
- `%s` — String

---

### `03.c` – Variable Assignment
Demonstrates assigning the value of one variable to another and printing both.

---

### `04.c` – Data Types and Sizes
Displays the size (in bytes) of different data types and demonstrates printing:
- Doubles with 2 decimal places using `%.2lf`
- Floats with 1 decimal place using `%.1f`
- Characters with `%c`

---

### `05.c` – Single User Input
Accepts user input for:
- Integer (`scanf("%d", &var)`)
- Double (`scanf("%lf", &var)`)
- Character (`scanf(" %c", &var)` — note the space before `%c` to consume whitespace)

---

### `06.c` – Multiple Inputs
Takes a double and a character as user input in a single line using:
```c
scanf("%lf %c", &number, &alpha);
```

---

### `07.c` – Simple Calculator
Accepts two numbers from the user and performs:
- Addition
- Subtraction
- Multiplication
- Division

Results are displayed with two decimal places using `%.2lf`.

---

## 🛠 Usage

1. Open the terminal (or PuTTY if on remote system).
2. Navigate to the directory containing the `.c` files.
3. Compile using `gcc`:
   ```bash
   gcc 04.c -o 04
   ./04
   ```

---

## 📌 Notes

- Use the correct format specifiers for input and output.
- When using `scanf("%c", &ch)`, prefix with a space: `scanf(" %c", &ch)` to avoid newline capture.
- Always verify your format strings for precision control (e.g., `%.2lf`).

---


