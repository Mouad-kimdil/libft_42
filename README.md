# libft - 42 Project By ![Mouad Kimdil](https://img.shields.io/badge/Mouad-Kimdil-blue)

![School: 1337](https://img.shields.io/badge/School-1337-blue)

Welcome to the "libft" project, part of the 42 School cursus. This project is your introduction to the world of C programming and serves as the foundation for many projects to come. "libft" is a library containing a collection of commonly used functions, both from the standard C library ("libc functions") and additional functions that you will implement from scratch.

## Table of Contents
- [Project Description](#project-description)
- [Libc functions](#Libc-functions)
- [Additional Functions](#Additional-Functions)
- [How to Use](#How-to-Use)

## Project Description

"libft" is your first project at 42 School, and it's designed to help you become familiar with C programming and the essential functions used in everyday programming tasks. The library contains functions that cover a wide range of functionalities, from manipulating strings to working with memory and characters.

## Libc functions

Here's a list of functions included in the "libft" library:

- `void *ft_memset(void *s, int c, size_t n);`
- `void ft_bzero(void *s, size_t n);`
- `void *ft_memcpy(void *dst, const void *src, size_t n);`
- `void *ft_memccpy(void *dst, const void *src, int c, size_t n);`
- `void *ft_memmove(void *dst, const void *src, size_t n);`
- `void *ft_memchr(const void *s, int c, size_t n);`
- `int ft_memcmp(const void *s1, const void *s2, size_t n);`
- `size_t ft_strlen(const char *s);`
- `char *ft_strdup(const char *s);`
- `char *ft_strcpy(char *dst, const char *src);`
- `char *ft_strncpy(char *dst, const char *src, size_t n);`
- `char *ft_strcat(char *dst, const char *src);`
- `char *ft_strncat(char *dst, const char *src, size_t n);`
- `size_t ft_strlcat(char *dst, const char *src, size_t size);`
- `char *ft_strchr(const char *s, int c);`
- `char *ft_strrchr(const char *s, int c);`
- `char *ft_strstr(const char *haystack, const char *needle);`
- `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
- `int ft_strcmp(const char *s1, const char *s2);`
- `int ft_strncmp(const char *s1, const char *s2, size_t n);`
- `int ft_atoi(const char *ptr);`
- `int ft_isalpha(int c);`
- `int ft_isdigit(int c);`
- `int ft_isalnum(int c);`
- `int ft_isascii(int c);`
- `int ft_isprint(int c);`
- `int ft_toupper(int c);`
- `int ft_tolower(int c);`

### Additional Functions

- `void *ft_memalloc(size_t size);`
- `void ft_memdel(void **ap);`
- `char *ft_strnew(size_t size);`
- `void ft_strdel(char **as);`
- `void ft_strclr(char *s);`
- `void ft_striter(char *s, void (*f)(char *));`
- `void ft_striteri(char *s, void (*f)(unsigned int, char *));`
- `char *ft_strmap(const char *s, char (*f)(char));`
- `char *ft_strmapi(const char *s, char (*f)(unsigned int, char));`
- `int ft_strequ(const char *s1, const char *s2);`
- `int ft_strnequ(const char *s1, const char *s2, size_t n);`
- `char *ft_strsub(const char *s, unsigned int start, size_t len);`
- `char *ft_strjoin(const char *s1, const char *s2);`
- `char *ft_strtrim(const char *s);`
- `char **ft_strsplit(const char *s, char c);`
- `char *ft_itoa(int n);`
- `void ft_putchar(char c);`
- `void ft_putstr(const char *s);`
- `void ft_putendl(const char *s);`
- `void ft_putnbr(int n);`
- `void ft_putchar_fd(char c, int fd);`
- `void ft_putstr_fd(const char *s, int fd);`
- `void ft_putendl_fd(const char *s, int fd);`
- `void ft_putnbr_fd(int n, int fd);`

## How to Use

To use the "libft" library in your projects, follow these steps:

1. Open a terminal and browse to the "libft" folder.

2. Run the Makefile using the command `make`. This generates the library as "libft.a".

3. Include the "libft.h" header in your code to access the libft functions.

4. Compile your code with the library using the following command:

   ```sh
   gcc -o myExecutable mySource.c libft.a
