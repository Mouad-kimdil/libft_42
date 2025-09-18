# MyLibrary - Personal C Utility Library

A personal collection of commonly used C functions and utilities designed to streamline development and avoid repetitive coding across projects.

## Overview

**MyLibrary** is my personal utility library that consolidates frequently used C functions in one place. Instead of rewriting the same string manipulations, memory operations, and utility functions for every new project, this library provides a ready-to-use collection that speeds up development and ensures consistency across my codebase.

## Features

### Core String & Memory Functions
- **String manipulation**: `my_strlen`, `my_strchr`, `my_strrchr`, `my_strncmp`, `my_strdup`, etc.
- **Memory operations**: `my_memset`, `my_memcpy`, `my_memmove`, `my_memcmp`, etc.
- **Character classification**: `my_isalpha`, `my_isdigit`, `my_isalnum`, `my_toupper`, etc.
- **String utilities**: `my_substr`, `my_strjoin`, `my_strtrim`, `my_split`, etc.
- **Conversion functions**: `my_atoi`, `my_itoa`, and more
- **Linked list operations**: `my_lstnew`, `my_lstadd_front`, `my_lstsize`, `my_lstmap`, etc.

### Memory Safety Features
- **`my_free`** - Enhanced free function that prevents dangling pointers by:
  - Safely deallocating memory
  - Setting pointer to NULL after freeing
  - Preventing double-free errors
  - Providing safer memory management patterns

## Installation

```bash
# Clone the repository
git clone https://github.com/yourusername/mylibrary.git
cd mylibrary

# Compile the library
make

# Clean object files
make clean

# Remove all generated files
make fclean
```

## 📖 Usage

```c
#include "mylibrary.h"

int main(void)
{
    // String operations
    char *str = my_strdup("Hello, World!");
    int len = my_strlen(str);

    // String utilities
    char *trimmed = my_strtrim("  Hello World  ", " ");
    char **words = my_split("apple,banana,cherry", ',');

    // Safe memory deallocation
    my_free((void **)&str);     // str is now NULL
    my_free((void **)&trimmed); // trimmed is now NULL

    return (0);
}
```

## Project Structure

```
mylibrary/
├── my_*.c         # Source files
├── mylibrary.h    # Header file
├── Makefile       # Build configuration
└── README.md      # This file
```

## Key Functions Overview

### Standard Functions
| Function | Description | Original |
|----------|-------------|----------|
| `my_strlen` | Calculate string length | `strlen` |
| `my_strchr` | Find character in string | `strchr` |
| `my_strdup` | Duplicate string | `strdup` |
| `my_memset` | Fill memory with constant byte | `memset` |
| `my_calloc` | Allocate and zero memory | `calloc` |

### Enhanced Functions
| Function | Description |
|----------|-------------|
| `my_substr` | Extract substring |
| `my_strjoin` | Join two strings |
| `my_strtrim` | Trim characters from string |
| `my_split` | Split string by delimiter |
| `my_itoa` | Convert integer to string |

### Safety Functions
| Function | Description |
|----------|-------------|
| `my_free` | Safe memory deallocation with NULL assignment |

## Why Use MyLibrary?

- **Time-saving**: No need to rewrite common functions for every project
- **Consistency**: Same reliable implementations across all my projects
- **Safety**: Enhanced memory management prevents common C pitfalls
- **Convenience**: All essential utilities in one place
- **Tested**: Well-tested functions that I trust and use regularly

## Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Originally inspired by the **42 School** libft project
- Customized and enhanced for personal development workflow
- Continuously updated based on project needs

---

**A personal toolkit that makes C development faster and more reliable.**
