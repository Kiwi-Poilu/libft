NAME = libft.a
B_NAME = libft_bonus.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
OPTIONS = -I
ARC = ar rcs
SRCS = ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
       ft_memchr.c ft_memcmp.c ft_strlen.c \
       ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
       ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c \
       ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
       ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

B_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
         ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

B_OBJS = $(B_SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(ARC) $(NAME) $(OBJS)

bonus:  $(NAME) $(B_OBJS)
	ar rc $(NAME) $(B_OBJS)

%.o:%.c	libft.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS) $(B_OBJS)

fclean:	clean
	rm -f $(NAME) $(B_NAME)

re:	fclean all

.PHONY: clean fclean all re bonus
