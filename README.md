# ft_printf

## Introduction
The goal of this project is to recode the `printf()` function from the C standard library. You will learn about variadic functions and improve your programming skills in C. Upon successful completion, you can include your `ft_printf()` function in your future C projects.

## Version
10

## Common Instructions
- Your project must be written in C.
- Your project must be written in accordance with the Norm.
- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors.
- All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
- If required, you must submit a Makefile which will compile your source files to the required output with the flags `-Wall`, `-Wextra`, and `-Werror`. Your Makefile must not relink.
- Your Makefile must at least contain the rules `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- If your project allows you to use your libft, you must copy its sources and its associated Makefile in a `libft` folder with its associated Makefile. Your project's Makefile must compile the library by using its Makefile, then compile the project.
- We encourage you to create test programs for your project, even though they won't be graded.

## Mandatory Part

**Program name:** `libftprintf.a`

**Turn in files:** Makefile, *.h, */*.h, *.c, */*.c

**Makefile:** `NAME`, `all`, `clean`, `fclean`, `re`

**External functs.:** `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`

**Libft authorized:** Yes

**Description:**
Write a library that contains `ft_printf()`, a function that will mimic the original `printf()`. You have to recode the `printf()` function from the C standard library.

The prototype of `ft_printf()` is:
```c
int ft_printf(const char *, ...);

The requirements are as follows:

Don't implement the buffer management of the original printf().
Your function has to handle the following conversions: c, s, p, d, i, u, x, X, %.
Your function will be compared against the original printf().
You must use the command ar to create your library. Using the libtool command is forbidden.
Your libftprintf.a library must be created at the root of your repository.
You have to implement the following conversions:

%c: Prints a single character.
%s: Prints a string (as defined by the common C convention).
%p: The void * pointer argument has to be printed in hexadecimal format.
%d: Prints a decimal (base 10) number.
%i: Prints an integer in base 10.
%u: Prints an unsigned decimal (base 10) number.
%x: Prints a number in hexadecimal (base 16) lowercase format.
%X: Prints a number in hexadecimal (base 16) uppercase format.
%%: Prints a percent sign.
