NAME = libftprintf.a

SRC = ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_unsigned_putnbr_fd.c ft_printf.c \
		 ft_hexa_putnbr_fd.c ft_putadress_fd.c


OBJECT = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

all : $(NAME)

$(NAME) : $(OBJECT)
	ar rc $(NAME) $(OBJECT)
%.o:%.c
	$(CC) $(CFLAGS) $< -o $@
clean :
	rm -f $(OBJECT)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY : clean fclean all re