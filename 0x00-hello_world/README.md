# 0x00. C - Hello, World
## Learning Objectives
### General
* Why C programming is awesome
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type `gcc main.c` 
* What is an entry point
* What is `main` 
* How to print text using `printf`, `puts` and `putchar`
* How to get the size of a specific type using the unary operator `sizeof`
* How to compile using `gcc`
* What is the default program name when compiling with `gcc`
* What is the official C coding style and how to check your code with `betty-style`
* How to find the right header to include in your source code when using a standard library function
* How does the `main` function influence the return value of the program

| Filename | Description |
| -------- | ----------- |
| [0-preprocessor](0-preprocessor) | runs a C file through the preprocessor and saves the result into another file. <br> - The C file name will be saved in the variable `$CFILE` <br> - The output should be saved in the file c |
| [1-compiler](1-compiler) | compiles a C file but does not link. <br> - C file name will be saved in the variable `$CFILE` <br> - output file will be named the same as the C file, but with the extension `.o` instead of `.c`.|
| [2-assembler](2-assembler) | generates the assembly code of a C code. <br> - C file name will be saved in the variable `$CFILE` <br> - output file will be named the same as the C file, but with the extension `.s` instead of `.c`. | 
| [3-name](3-name) | compiles a C file and creates an executable named ` cisfun`. | 
| [4-puts.c](4-puts.c) | prints exactly `"Programming is like building a multilingual puzzle` using `puts` function |
| [5-printf.c](5-printf.c) | prints exactly `with proper grammar, but the outcome is a piece of art` using the function `printf` | 
| [6-size.c](6-size.c) | prints the size of various types on the computer it is compiled and run on. | 
