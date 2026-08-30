# Armstrong Number Checker in C

## Overview

This project is a simple C program that checks whether an integer entered by the user is an **Armstrong number**. An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. The program demonstrates loops, arithmetic operations, conditional statements, and input validation in C.

---

## Features

- Accepts an integer input from the user
- Automatically handles negative numbers
- Calculates the number of digits in the number
- Raises each digit to the power of the total number of digits and sums the results
- Checks if the sum equals the original number
- Prints a clear message indicating whether the number is an Armstrong number or not

---

## Requirements

- C compiler (e.g., `gcc`)
- Standard C library
- Compatible with Linux, macOS, and Windows

---

## Build Instructions

Compile the program using `gcc`:

```bash
gcc armstrong_checker.c -o armstrong_checker
