# Simple Number Guessing Game in C

## Overview

This project is a simple C program that implements a **number guessing game**. The computer randomly selects a number between 0 and 99, and the user attempts to guess it. The program provides hints if the guessed number is too high or too low. This project demonstrates loops, conditional statements, random number generation, and basic input validation in C.

---

## Features

- Generates a random number between 0 and 99 using `rand()`
- Accepts integer guesses from the user
- Provides hints:
  - "HIGHER" if the guess is too low
  - "LOWER" if the guess is too high
- Congratulates the user upon a correct guess
- Includes input validation for non-integer guesses

---

## Requirements

- C compiler (e.g., `gcc`)
- Standard C library (`stdio.h`, `stdlib.h`, `time.h`)
- Compatible with Linux, macOS, and Windows

---

## Build Instructions

Compile the program using `gcc`:

```bash
gcc number_guessing_game.c -o number_guessing_game
