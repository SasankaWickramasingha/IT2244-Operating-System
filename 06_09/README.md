# Area Calculation Using Parent-Child Process Communication in C

## Description

This is a C program that demonstrates inter-process communication (IPC) between a parent and a child process using pipes. The program allows the user to calculate the area of different geometric shapes (circle, triangle, rectangle, square). 

The parent process:
- Takes input from the user (shape and dimensions)
- Sends the input to the child process through a pipe

The child process:
- Receives the data
- Performs the area calculation
- Sends the result back to the parent process through another pipe

## Features

- Shape Options:
  - Circle
  - Triangle
  - Rectangle
  - Square
- Inter-process communication using two uni-directional pipes
- Area calculation performed in the child process
- Loop-based interface allowing multiple calculations until the user exits

## How It Works

1. **Parent** collects shape and dimensions.
2. **Parent** sends data to the **Child** through pipe 1.
3. **Child** calculates the area and sends it back through pipe 2.
4. **Parent** receives and displays the result.

## Sample Usage

```
Choose Shape (1: Circle, 2: Triangle, 3: Rectangle, 4: Square, 5: Exit): 1
Enter radius: 7
Calculated Area: 153.94
```

## Compilation

Use the following command to compile the program:

```bash
gcc exercise.c -o area_calc -lm
```

> Note: `-lm` is required to link the math library.

## Run the Program

```bash
./area_calc
```


