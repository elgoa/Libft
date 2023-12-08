# -*- MakeFile -*-


all: libft.a

libft.a: ft_tolower.o ft_toupper.o ft_atoi.o ft_bzero.o ft_calloc.o \
    ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
    ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
    ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
    ft_putstr_fd.o ft_strchr.o ft_strdup.o ft_striteri.o ft_strjoin.o \
    ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o ft_strncmp.o \
    ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strtrim.o ft_substr.o \
    ft_toupper.o ft_tolower.o
	ar rcs libft.a ft_tolower.o ft_toupper.o ft_atoi.o ft_bzero.o ft_calloc.o \
    ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
    ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
    ft_memset.o ft_putchar_fd.o ft_putendl_fd.o ft_putnbr_fd.o \
    ft_putstr_fd.o ft_strchr.o ft_strdup.o ft_striteri.o ft_strjoin.o \
    ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o ft_strncmp.o \
    ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strtrim.o ft_substr.o \
    ft_toupper.o ft_tolower.o

ft_atoi.o: ft_atoi.c
	gcc -c ft_atoi.c -o ft_atoi.o

ft_bzero.o: ft_bzero.c
	gcc -c ft_bzero.c -o ft_bzero.o	

ft_calloc.o: ft_calloc.c
	gcc -c ft_calloc.c -o ft_calloc.o

ft_isalnum.o: ft_isalnum.c
	gcc -c ft_isalnum.c -o ft_isalnum.o

ft_isalpha.o: ft_isalpha.c
	gcc -c ft_isalpha.c -o ft_isalpha.o

ft_isascii.o: ft_isascii.c
	gcc -c ft_isascii.c -o ft_isascii.o

ft_isdigit.o: ft_isdigit.c
	gcc -c ft_isdigit.c -o ft_isdigit.o

ft_isprint.o: ft_isprint.c
	gcc -c ft_isprint.c -o ft_isprint.o

ft_itoa.o: ft_itoa.c
	gcc -c ft_itoa.c -o ft_itoa.o
ft_memchr.o: ft_memchr.c
	gcc -c ft_memchr.c -o ft_memchr.o

ft_memcmp.o: ft_memcmp.c
	gcc -c ft_memcmp.c -o ft_memcmp.o

ft_memcpy.o: ft_memcpy.c
	gcc -c ft_memcpy.c -o ft_memcpy.o

ft_memmove.o: ft_memmove.c
	gcc -c ft_memmove.c -o ft_memmove.o

ft_memset.o: ft_memset.c
	gcc -c ft_memset.c -o ft_memset.o

ft_putchar_fd.o: ft_putchar_fd.c
	gcc -c -Wall -Wextra -Werror ft_putchar_fd.c -o ft_putchar_fd.o

ft_putendl_fd.o: ft_putendl_fd.c
	gcc -c -Wall -Wextra -Werror ft_putendl_fd.c -o ft_putendl_fd.o
ft_putnbr_fd.o: ft_putnbr_fd.c
	gcc -c -Wall -Wextra -Werror ft_putnbr_fd.c -o ft_putnbr_fd.o

ft_putstr_fd.o: ft_putstr_fd.c
	gcc -c -Wall -Wextra -Werror ft_putstr_fd.c -o ft_putstr_fd.o

ft_strchr.o: ft_strchr.c
	gcc -c -Wall -Wextra -Werror ft_strchr.c -o ft_strchr.o

ft_strdup.o: ft_strdup.c
	gcc -c -Wall -Wextra -Werror ft_strdup.c -o ft_strdup.o

ft_striteri.o: ft_striteri.c
	gcc -c -Wall -Wextra -Werror ft_striteri.c -o ft_striteri.o

ft_strjoin.o: ft_strjoin.c
	gcc -c -Wall -Wextra -Werror ft_strjoin.c -o ft_strjoin.o	

ft_strlcat.o: ft_strlcat.c
	gcc -c -Wall -Wextra -Werror ft_strlcat.c -o ft_strlcat.o

ft_strlcpy.o: ft_strlcpy.c
	gcc -c -Wall -Wextra -Werror ft_strlcpy.c -o ft_strlcpy.o

ft_strlen.o: ft_strlen.c
	gcc -c -Wall -Wextra -Werror ft_strlen.c -o ft_strlen.o

ft_strmapi.o: ft_strmapi.c
	gcc -c -Wall -Wextra -Werror ft_strmapi.c -o ft_strmapi.o

ft_strncmp.o: ft_strncmp.c
	gcc -c -Wall -Wextra -Werror ft_strncmp.c -o ft_strncmp.o

ft_strnstr.o: ft_strnstr.c
	gcc -c -Wall -Wextra -Werror ft_strnstr.c -o ft_strnstr.o

ft_strrchr.o: ft_strrchr.c
	gcc -c -Wall -Wextra -Werror ft_strrchr.c -o ft_strrchr.o

ft_strsplit.o: ft_strsplit.c
	gcc -c -Wall -Wextra -Werror ft_strsplit.c -o ft_strsplit.o

ft_strtrim.o: ft_strtrim.c
	gcc -c -Wall -Wextra -Werror ft_strtrim.c -o ft_strtrim.o

ft_substr.o: ft_substr.c
	gcc -c -Wall -Wextra -Werror ft_substr.c -o ft_substr.o

ft_toupper.o: ft_toupper.c
	gcc -c -Wall -Wextra -Werror ft_toupper.c -o ft_toupper.o

ft_tolower.o: ft_tolower.c
	gcc -c -Wall -Wextra -Werror ft_tolower.c -o ft_tolower.o

clean:
	rm -f *.o