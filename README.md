# LIBFT - Custom Standard C Library

## Overview

LIBFT is a custom implementation of several standard C library functions, as well as additional utility functions. It is designed to provide a set of fundamental tools for C programming, enabling developers to work more efficiently by implementing common functionalities themselves.

## Features

- **Standard C Functions:** Includes implementations of standard C library functions such as `strlen`, `strcpy`, `atoi`, etc.
- **Additional Utility Functions:** Offers additional utility functions that are commonly used in C programming tasks.
- **Modular Design:** Functions are organized into modules for easier management and integration into projects.
- **Tested and Optimized:** Each function is thoroughly tested and optimized for performance and reliability.

## Usage

1. Clone the repository:

```bash
git clone https://github.com/ychbily/LIBFT.git

2. Compile the library:

make

3. Link the library to your project:

#include "libft.h"

4. Use the functions in your code as needed.
```
## Contents

The library contains the following fucntions:

### Functions from <ctype.h>

- [`ft_isalpha`](#libft/ft_isalpha.c) - checks for an alphabetic character.
- ft_isdigit - checks for a digit (0 through 9).
ft_isalnum - checks for an alphanumeric character.
ft_isascii - checks whether c fits into the ASCII character set.
ft_isprint - checks for any printable character.
ft_toupper - convert char to uppercase.
ft_tolower - convert char to lowercase.
