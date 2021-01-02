## Problem Description

This program checks whether three given positive integers can represent the sides of a **right-angled triangle**. If so, it outputs `YES`; otherwise, it outputs `NO`.

## How It Works

The program reads three positive integers from the input and uses the **Pythagorean theorem** to determine if they can form a right-angled triangle. According to the theorem, for any right-angled triangle, the square of the length of the hypotenuse equals the sum of the squares of the other two sides.

Since the input order is not fixed, the program checks all three possible combinations:

- $a^2 + b^2 == c^2$
- $a^2 + c^2 == b^2$
- $b^2 + c^2 == a^2$

If any of these conditions is true, the numbers can form a right-angled triangle, and the program prints `YES`. Otherwise, it prints `NO`.
