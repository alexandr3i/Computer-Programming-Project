# Computer Programming Project (C and C++)

Console programs for a semestrial Computer Programming project focused on:
- computing the **determinant** of 3×3 matrices
- computing the **rank** of 3×3 matrices
- computing **LCM** and **GCD** of two determinants

The main program reads **two 3×3 matrices**, computes their determinants, then displays:
- **LCM(detA, detB)**
- **GCD(detA, detB)**
- **rank(A)** and **rank(B)**

---

## Repository contents

### Main program
- `Computer Programming Project.c`  
  The complete interactive program: reads 2 matrices, computes determinants, LCM/GCD, and ranks.

### Standalone C++ utilities (each can be compiled separately)
- `determinant.cpp` — determinant calculation
- `rank_of_matrix.cpp` — rank calculation
- `euclid.cpp` — GCD using Euclid’s algorithm
- `multiple.cpp` — basic multiplication helper (used for LCM logic)

### Documentation
- `Computer-Programming-Project-Documentation.pdf` — project description and flowcharts

---

## How the main program works

- **Determinant (3×3):** computed using the triangle (Sarrus-style) method.
- **GCD:** computed using **Euclid’s algorithm**.
- **LCM:** computed using multiplication + GCD relationship.
- **Rank (3×3):**
  - if det ≠ 0 → rank = 3
  - else checks a 2×2 minor to decide between rank 2 or 1

---

## Build & Run

### Windows (MinGW-w64)

Compile the main C program:
- `gcc "Computer Programming Project.c" -o main.exe`

Run:
- `main.exe`

Compile any C++ utility (example):
- `g++ determinant.cpp -o determinant.exe`
- `determinant.exe`

Repeat for the others:
- `g++ rank_of_matrix.cpp -o rank.exe`
- `g++ euclid.cpp -o euclid.exe`
- `g++ multiple.cpp -o multiple.exe`

---

### Linux / macOS (GCC/Clang)

Compile the main C program:
- `gcc "Computer Programming Project.c" -o main`

Run:
- `./main`

Compile any C++ utility (example):
- `g++ determinant.cpp -o determinant`
- `./determinant`

---

## Example input (main program)

The program will ask you to enter the 2 matrices (3×3), then prints:
- determinant of each matrix
- least common multiple of the two determinants
- greatest common divisor of the two determinants
- rank of each matrix

---

## License
Educational use only. This repository is intended for learning, demonstration, and portfolio/documentation purposes.
