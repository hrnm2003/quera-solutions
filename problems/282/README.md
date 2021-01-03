## Problem Description

This program checks whether a given positive integer **n** is a **perfect number**. A perfect number is a number where the sum of its divisors (excluding the number itself) equals the number.

If **n** is a perfect number, the program outputs `YES`; otherwise, it outputs `NO`.

## How It Works

The program reads the integer **n** from the input and calculates the sum of all its divisors (excluding **n**). It iterates through all integers from 1 to **n-1**, checking if they divide **n** without a remainder. If they do, they are added to the sum.

Once the sum of divisors is computed, the program compares it to **n**:

- If the sum of divisors equals **n**, the number is a perfect number, and the program prints `YES`.
- Otherwise, it prints `NO`.