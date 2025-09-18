#ifndef MYLIBRARY_H
# define MYLIBRARY_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

size_t	my_strlen(const char *s);
size_t	my_strlcpy(char *dest, const char *src, size_t dstsize);
size_t	my_strlcat(char *dest, const char *src, size_t dstsize);
char	*my_strrchr(const char *str, int c);
char	*my_strchr(const char *s, int c);
char	*my_substr(char const *s, unsigned int start, size_t len);
char	*my_strjoin(char const *s1, char const *s2);
char	*my_strnstr(const char *str, const char *to_find, size_t len);
char	*my_strdup(char *str);
char	**my_split(const char *s, char c);
int		my_isalpha(int c);
int		my_isdigit(int c);
int		my_isalnum(int c);
int		my_isascii(int c);
int		my_isprint(int c);
int		my_toupper(int c);
int		my_tolower(int c);
int		my_strncmp(const char *s1, const char *s2, size_t len);
int		my_memcmp(const void *s1, const void *s2, size_t n);
int		my_atoi(const char *str);
void	*my_memset(void *b, int c, size_t len);
void	my_bzero(void *s, size_t n);
void	*my_memcpy(void *dest, const void *src, size_t n);
void	*my_memmove(void *dest, const void *src, size_t len);
void	*my_memchr(const void *s, int c, size_t n);
void	*my_calloc(size_t count, size_t size);
char	*my_strtrim(char const *s1, char const *set);
char	*my_itoa(int nb);
char	*my_strmapi(char const *s, char (*f)(unsigned int, char));
void	my_striteri(char *s, void (*f)(unsigned int, char*));
void	my_putchar_fd(char c, int fd);
void	my_putstr_fd(char *s, int fd);
void	my_putendl_fd(char *s, int fd);
void	my_putnbr_fd(int n, int fd);
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
t_list	*my_lstnew(void *content);
void	my_lstadd_front(t_list **lst, t_list *new);
int		my_lstsize(t_list *lst);
t_list	*my_lstlast(t_list *lst);
void	my_lstadd_back(t_list **lst, t_list *new);
void	my_lstdelone(t_list *lst, void (*del)(void*));
void	my_lstclear(t_list **lst, void (*del)(void*));
void	my_lstiter(t_list *lst, void (*f)(void *));
t_list	*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	my_free(void **freed);
#endif