#ifndef MY_HEADER_FILE_H
#define MY_HEADER_FILE_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stddef.h>

int		ft_atoi(char *number);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(int count, int size);
int     ft_isalnum(unsigned char a);
int     ft_isalpha(unsigned char a);
int     ft_isascii(unsigned char a);
int     ft_isdigit(unsigned char a);
int     ft_isprint(unsigned char a);
char    *ft_itoa(int n);
char    *ft_memchr(char *s, int c, int size);
int     ft_memcmp(char *s1, char *s2, int size);
void    *ft_memcpy(void *restrict dst,  const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int number, int fd);
void    ft_putstr_fd(char *s, int fd);
char    *ft_strchr(char *s, int c);
char    *ft_strdup(char *s1);
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
int     ft_strlcat(char *dst, char *src, int destsize);
int     ft_strlcpy(char *dst, char *src, int dstsize);
int     ft_strlen(char const *str);
char *ft_strmapi(char const *s,char (*f)(unsigned int, char));
int     ft_strncmp(char *s1, char *s2, int n);
char    *ft_strnstr(char *text, char *to_search, int n);
char    *ft_strrchr(char *s, int c);
char    **ft_strsplit(char const *s, char c);
char *ft_strtrim(char *s, char *set);
char	*ft_substr(char const	*s,unsigned int start, size_t len);
void    ft_tolower(char *c);
void    ft_toupper(char *c);

#endif /* MY_HEADER_FILE_H */