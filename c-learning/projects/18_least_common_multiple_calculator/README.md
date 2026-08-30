# Least Common Multiple (LCM) Calculator in C

## Overview

This project is a simple C program that calculates the **Least Common Multiple (LCM)** of two integers entered by the user. It demonstrates the use of loops, arithmetic operations, conditional statements, and input validation in C. The program uses the **relationship between GCD and LCM** for efficient computation:

\[
\text{LCM}(a, b) = \frac{a \times b}{\text{GCD}(a, b)}
\]

---

## Features

- Accepts two integer inputs from the user
- Handles negative numbers automatically
- Computes LCM using the Euclidean algorithm for GCD
- Handles the special case when both numbers are zero
- Prints the result clearly in the terminal

---

## Requirements

- C compiler (e.g., `gcc`)
- Standard C library
- Compatible with Linux, macOS, and Windows

---

## Build Instructions

Compile the program using `gcc`:

```bash
gcc lcm_calculator.c -o lcm_calculator
