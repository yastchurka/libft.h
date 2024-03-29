# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

NAME = libft.a

CC = cc

CCFLAG = -Wall -Wextra -Werror

AR = ar

ARFLAG = crs

SRCS_1 = ft_memset.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_toupper.c \
ft_tolower.c \
ft_strlen.c \
ft_memcpy.c \
ft_strchr.c \
ft_memchr.c \
ft_strrchr.c \
ft_strlcpy.c \
ft_strlcat.c \
ft_isalnum.c \
ft_strncmp.c \
ft_strrchr.c \
ft_calloc.c \
ft_strjoin.c \
ft_substr.c \
ft_strnstr.c \
ft_atoi.c \
ft_bzero.c \
ft_memcmp.c \
ft_strdup.c \
ft_strnstr.c \
ft_memmove.c \
ft_strtrim.c \
ft_striteri.c \
ft_strmapi.c \
ft_itoa.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_lstnew.c \
ft_lstadd_front.c \
ft_lstsize.c \
ft_lstlast.c \
ft_lstlast.c \
ft_lstadd_back.c \
ft_lstdelone.c \
ft_lstclear.c \
ft_lstiter.c \
ft_lstmap.c \
ft_split.c \


SRCS = $(SRCS_1)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
		$(AR) $(ARFLAG) $@ $^

bonus:	$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
		$(CC) $(CCFLAG) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
