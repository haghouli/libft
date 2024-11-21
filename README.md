# Libft - 1337 Project

## Description
Libft is a project curriculum where you create your own custom C library, implementing various standard C functions. The goal is to gain a deeper understanding of C programming, memory management, and to practice writing functions that will be useful in future projects. This project is a fundamental step in the 42 curriculum and is designed to help you improve your coding skills and familiarity with low-level programming.

The library includes functions for string manipulation, memory allocation, mathematical operations, and more. The goal is to implement these functions with optimal performance and without using the standard library where possible.

## Functions Implemented
The following functions (and more) should be implemented in the `libft` project:

### String Manipulation
- **ft_strlen**: Computes the length of a string.
- **ft_strcpy**: Copies a string to another.
- **ft_strncpy**: Copies up to n characters from one string to another.
- **ft_strcat**: Concatenates two strings.
- **ft_strncat**: Concatenates up to n characters from one string to another.
- **ft_strcmp**: Compares two strings.
- **ft_strchr**: Locates the first occurrence of a character in a string.
- **ft_strstr**: Finds the first occurrence of a substring in a string.

### Memory Management
- **ft_memset**: Fills a block of memory with a specific value.
- **ft_bzero**: Sets a block of memory to zero.
- **ft_memcpy**: Copies a block of memory from one location to another.
- **ft_memmove**: Moves a block of memory from one location to another, handling overlapping regions.
  
### Integer Operations
- **ft_atoi**: Converts a string to an integer.
- **ft_isdigit**: Checks if a character is a digit.
- **ft_isalpha**: Checks if a character is alphabetic.
- **ft_isalnum**: Checks if a character is alphanumeric.
- **ft_isascii**: Checks if a character is an ASCII character.
- **ft_isprint**: Checks if a character is printable.

### Character Manipulation
- **ft_toupper**: Converts a character to uppercase.
- **ft_tolower**: Converts a character to lowercase.

### List Operations
- **ft_lstnew**: Creates a new linked list node.
- **ft_lstadd**: Adds a new node at the beginning of the linked list.
- **ft_lstadd_back**: Adds a new node at the end of the linked list.
- **ft_lstclear**: Deletes the entire list and frees the memory.
- **ft_lstmap**: Applies a function to each node of the list.

## Installation

### Clone the Repository:
```bash
git clone https://github.com/haghouli/libft.git
cd libft
make
