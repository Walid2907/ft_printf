This project has been created as part of the 42 curriculum by wkerdad.

# ft_printf

A reimplementation of the C `printf()` function. This project builds a static library `libftprintf.a` that provides `ft_printf` and helper routines to print formatted output.

## Features

Supported conversions (from the current implementation):

- `%c` character
- `%s` string
- `%d` / `%i` signed decimal integer
- `%u` unsigned decimal integer
- `%x` lowercase hexadecimal
- `%X` uppercase hexadecimal
- `%p` pointer (hex with `0x` prefix)
- `%%` literal percent sign

## How it works

`ft_printf` parses the format string one character at a time:

- If a regular character is found, it prints it directly.
- If a `%` is found, the next character is treated as a conversion specifier and dispatched to a specific helper function.
- The function returns the total number of characters written, or `-1` on error (e.g., null format string or dangling `%` at end).

All output is written to standard output.

### Conversion dispatch

Each conversion specifier calls a dedicated function:

- `%c` → `ft_print_char`
- `%s` → `ft_print_str`
- `%d` / `%i` → `ft_putnbr`
- `%u` → `ft_putnbr_unsigned`
- `%x` → `ft_low_hexa`
- `%X` → `ft_up_hexa`
- `%p` → `ft_pointer`
- `%%` → `ft_print_char('%')`

## Build

This repository provides a Makefile that builds a static library:

```sh
make
```

Output:
- `libftprintf.a`

### Other targets

```sh
make clean    # remove object files
make fclean   # remove objects + library
make re       # rebuild
```

## Usage

Include the header and link the library:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number=%d\n", "world", 42);
    return 0;
}
```

Compile and link:

```sh
cc main.c -L. -lftprintf
```

## Author

- Walid2907 
