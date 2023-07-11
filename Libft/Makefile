SRCS	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \

BONUS	=

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

all : $(NAME)

$(NAME) :
		$(CC) $(FLAGS) -c $(SRCS)
		ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) -c $^

clean :
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

bonus :
		$(CC) $(FLAGS) -c $(BONUS)
		ar rcs $(NAME) $(BONUS_OBJS)

.PHONY : all clean fclean re bonus
