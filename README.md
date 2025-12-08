*This project has been created as part of the 42 curriculum by [TON_LOGIN].*

# Libft

![Norminette](https://img.shields.io/badge/norminette-passing-success?style=flat-square) ![Score](https://img.shields.io/badge/score-125%2F100-brightgreen?style=flat-square) ![Language](https://img.shields.io/badge/language-C-blue?style=flat-square)

## Description

Libft is the very first project of the 42 cursus. It involves creating a personal C library comprising standard libc functions and other common utility functions. This library will be used throughout the curriculum to avoid rewriting these basic tools for every project.

The goal is to understand how these standard functions work under the hood, focusing on memory management, string manipulation, and linked lists.

## Instructions

### Compilation
The library is built using a Makefile. Open a terminal in the root directory and run:

```bash
make        # Compiles libft.a (mandatory functions)
make bonus  # Compiles libft.a including list functions
make clean  # Removes object files
make fclean # Removes object files and the library
make re     # Rebuilds everything
```
