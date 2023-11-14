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

_ `size_t	ft_strlen(const char *s);`
_ `size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);`
_ `size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);`
_ `char	*ft_strrchr(const char *str, int c);`
_ `char	*ft_strchr(const char *s, int c);`
_ `char	*ft_strnstr(const char *str, const char *to_find, size_t len);`
_ `char	*ft_strdup(char *str);`
_ `int		ft_isalpha(int c);`
_ `int		ft_isdigit(int c);`
_ `int		ft_isalnum(int c);`
_ `int		ft_isascii(int c);`
_ `int		ft_isprint(int c);`
_ `int		ft_toupper(int c);`
_ `int		ft_tolower(int c);`
_ `int		ft_strncmp(const char *s1, const char *s2, size_t len);`
_ `int		ft_memcmp(const void *s1, const void *s2, size_t n);`
_ `int		ft_atoi(const char *str);`
_ `void	*ft_memset(void *b, int c, size_t len);`
_ `void	ft_bzero(void *s, size_t n);`
_ `void	*ft_memcpy(void *dest, const void *src, size_t n);`
_ `void	*ft_memmove(void *dest, const void *src, size_t len);`
_ `void	*ft_memchr(const void *s, int c, size_t n);`
_ `void	*ft_calloc(size_t count, size_t size);`

### Additional Functions

_ `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));`
_ `void	ft_striteri(char *s, void (*f)(unsigned int, char*));`
_ `void	ft_putchar_fd(char c, int fd);`
_ `void	ft_putstr_fd(char *s, int fd);`
_ `void	ft_putendl_fd(char *s, int fd);`
_ `void	ft_putnbr_fd(int n, int fd);`
_ `char	*ft_substr(char const *s, unsigned int start, size_t len);`
_ `char	*ft_strjoin(char const *s1, char const *s2);`
_ `char	**ft_split(const char *s, char c);`
