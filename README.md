# 🚀 Libft - 42 School

**Libft** is a custom C library, built as part of the 42 School curriculum. It reimplements many essential C functions and adds helpful utilities for string manipulation, memory management, and linked list handling. This project is the foundation for future projects at 42 and reinforces key programming skills. 🌱

## 📋 Features

- 🛠️ **Standard C functions**: Reimplemented functions like `ft_strlen`, `ft_strcpy`, `ft_memset`, `ft_atoi`, and more.
- 🔗 **Linked list utilities**: Functions to manipulate linked lists (`ft_lstnew`, `ft_lstadd`, etc.).
- 🧠 **Memory management**: Custom functions for memory handling (`ft_memalloc`, `ft_memcpy`, etc.).
- ✅ Fully compliant with **42's Norminette** coding standards (no `printf`, no `for` loops, etc.).

## 🛠️ Installation

### Prerequisites

Before you begin, ensure you have the following installed:

- 🖥️ **Unix-like OS** (Linux, macOS, etc.)
- 🔧 **GCC or Clang** compiler

### Steps to Install

1. **Clone the repository**:
    ```bash
    git clone [https://github.com/your-username/libft.git](https://github.com/itsrerodrigs/42-libft.git)
    cd libft
    ```

2. **Compile the library**:
    ```bash
    make
    ```

   This will generate the `libft.a` file, which can be used to link your own programs to this custom library. 📚

## 🚀 Usage

Once compiled, you can use **Libft** in your own C projects! 🎯

1. **Include the library header** in your program:
    ```c
    #include "libft.h"
    ```

2. **Compile your project** with the `libft.a` library:
    ```bash
    gcc -Wall -Wextra -Werror your_program.c libft.a -o your_program
    ```

3. **Run your program**:
    ```bash
    ./your_program
    ```

## 🧹 Cleaning Up

- To remove all object files (`.o` files):
    ```bash
    make clean
    ```

- To remove object files **and** the `libft.a` file:
    ```bash
    make fclean
    ```

- To clean and recompile everything from scratch:
    ```bash
    make re
    ```

## 🛡️ Testing

You can use third-party testers to ensure that your **Libft** functions work correctly. Here are a few popular ones:

- [libft-unit-test](https://github.com/alelievr/libft-unit-test) by @alelievr
- [libftTester](https://github.com/Tripouille/libftTester) by @Tripouille

These testers can help you verify that all functions conform to the requirements.

---

🚀 **Libft** is an essential project for learning how to build a library from scratch, and mastering it will pave the way for more advanced projects at 42 School. Good luck and happy coding! 😄

