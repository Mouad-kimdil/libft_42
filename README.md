# Libft - 42 Project By ![Mouad Kimdil](https://img.shields.io/badge/Mouad-Kimdil-blue)

![School: 1337](https://img.shields.io/badge/School-1337-blue)

Welcome to the "libft" project, part of the 42 School cursus. This project is your introduction to the world of C programming and serves as the foundation for many projects to come. "libft" is a library containing a collection of commonly used functions, both from the standard C library ("libc functions") and additional functions that you will implement from scratch.

## Table of Contents
- [Project Description](#project-description)
- [Libc functions](#libc-functions)
- [Additional Functions](#additional-functions)
- [Bonus Functions](#bonus-functions)

## Project Description

"libft" is your first project at 42 School, and it's designed to help you become familiar with C programming and the essential functions used in everyday programming tasks. The library contains functions that cover a wide range of functionalities, from manipulating strings to working with memory and characters.

## Libc functions

Here's a list of functions included in the "libft" library:

- `size_t	ft_strlen(const char *s);`
- `size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);`
- `size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);`
- `char	*ft_strrchr(const char *str, int c);`
- `char	*ft_strchr(const char *s, int c);`
- `char	*ft_strnstr(const char *str, const char *to_find, size_t len);`
- `char	*ft_strdup(char *str);`
- `int		ft_isalpha(int c);`
- `int		ft_isdigit(int c);`
- `int		ft_isalnum(int c);`
- `int		ft_isascii(int c);`
- `int		ft_isprint(int c);`
- `int		ft_toupper(int c);`
- `int		ft_tolower(int c);`
- `int		ft_strncmp(const char *s1, const char *s2, size_t len);`
- `int		ft_memcmp(const void *s1, void *s2, size_t n);`
- `int		ft_atoi(const char *str);`
- `void	*ft_memset(void *b, int c, size_t len);`
- `void	ft_bzero(void *s, size_t n);`
- `void	*ft_memcpy(void *dest, const void *src, size_t n);`
- `void	*ft_memmove(void *dest, const void *src, size_t len);`
- `void	*ft_memchr(const void *s, int c, size_t n);`
- `void	*ft_calloc(size_t count, size_t size);`

## Additional Functions

Here are additional functions in the "libft" library:

- `char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));`
- `void	ft_striteri(char *s, void (*f)(unsigned int, char*));`
- `void	ft_putchar_fd(char c, int fd);`
- `void	ft_putstr_fd(char *s, int fd);`
- `void	ft_putendl_fd(char *s, int fd);`
- `void	ft_putnbr_fd(int n, int fd);`
- `char	*ft_substr(char const *s, unsigned int start, size_t len);`
- `char	*ft_strjoin(char const *s1, char const *s2);`
- `char	**ft_split(const char *s, char c);`

## Additional Functions

Here are bonus functions in the "libft" library:

- `t_list	*ft_lstnew(void *content);`
- `void	ft_lstadd_front(t_list **lst, t_list *new);`
- `int		ft_lstsize(t_list *lst);`
- `t_list	*ft_lstlast(t_list *lst);`
- void	ft_lstadd_back(t_list **lst, t_list *new);`
- `void	ft_lstdelone(t_list *lst, void (*del)(void*));`
- `void	ft_lstclear(t_list **lst, void (*del)(void*));`
- `void	ft_lstiter(t_list *lst, void (*f)(void *));`
- `t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
