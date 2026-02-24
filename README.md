# Computer Programming Project (C)

A small **C** console application created as part of a Computer Programming project.

---

## What’s in this folder
Inside `Computer Programming Project/` you will find:
- C source file(s): `*.c`
- documentation

---

## How to compile & run (C)

### Option A - Windows (MinGW-w64)
1. Install **MinGW-w64** (so you have `gcc` in PATH).
2. Open **Command Prompt** in the `Computer Programming Project/` folder.
3. Compile everything in the folder:
   - `gcc *.c -o app.exe`
4. Run:
   - `app.exe`

If you get linker errors, compile with all `.c` files (the command above already does this).

---

### Option B - Windows (Visual Studio / MSVC)
1. Open **Developer Command Prompt for VS**
2. Go to the `Computer Programming Project/` folder.
3. Compile:
   - `cl *.c`
4. Run the generated `.exe` (usually the first `.exe` created in the folder).

---

### Option C - Linux / macOS (GCC or Clang)
1. Open a terminal in `Computer Programming Project/`.
2. Compile:
   - `gcc *.c -o app`
   (or `clang *.c -o app`)
3. Run:
   - `./app`

---

## Troubleshooting
- If the program expects input files, make sure you run it **from the same folder** where those files exist.
- If the code uses Windows-only functions, compile/run on Windows (or adjust the code for portability).
- If you see missing header errors, confirm the `*.h` files are in the same folder or included via correct paths.

---

## License
Educational use only. This repository is intended for learning, demonstration, and portfolio/documentation purposes.
