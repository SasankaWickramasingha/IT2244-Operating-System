# Script to Calculate LCM and GCD

This shell script calculates the Least Common Multiple (LCM) of two numbers (a and b) and the Greatest Common Divisor (GCD) of another pair of numbers (b and c).

## Script Description

The script performs the following actions:

1.  **Prompts for Input:** It asks the user to enter three numbers:  'a', 'b', and 'c'.
2.  **GCD Function:** It defines a function `gcd()` to calculate the Greatest Common Divisor of two numbers using the Euclidean algorithm.
3.  **LCM Calculation:** It calculates the LCM of 'a' and 'b' using the formula:  LCM(a, b) = (a * b) / GCD(a, b).
4.  **Output:** It displays the calculated LCM of 'a' and 'b' and the GCD of 'b' and 'c' to the user.

## How to Use

1.  **Save the script:** Save the script to a file (e.g., `calculate_lcm_gcd.sh`).
2.  **Make it executable:** Give the script execute permissions using the command:  `chmod +x calculate_lcm_gcd.sh`
3.  **Run the script:** Execute the script from the command line:  `./calculate_lcm_gcd.sh`
4.  **Enter the numbers:** The script will prompt you to enter the values for 'a', 'b', and 'c'.  Enter the numbers when prompted.
5.  **View the results:** The script will display the calculated LCM and GCD.

## Code
```bash
read -p "Enter number a: " a
read -p "Enter number b: " b
read -p "Enter number c: " c

gcd() {
  while [ $2 -ne 0 ]; do
    temp=$2
    set -- $2 $(( $1 % $2 ))
  done
  echo $1
}

g=$(gcd $a $b)
lcm=$(( a * b / g ))

echo "LCM of $a and $b is: $lcm"
echo "GCD of $b and $c is: $(gcd $b $c)"
```

## Output
```
Enter number a: 5
Enter number b: 12
Enter number c: 7
LCM of 5 and 12 is: 60
GCD of 12 and 7 is: 1
```