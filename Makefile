NAME = libftprintf.a

SOURCES = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_base.c ft_putstr.c ft_strchr.c helper.c

FLAGS = -Wall -Wextra -Werror 

OBJECT = $(SOURCES:.c=.o)

%.o : %.c
	gcc $(FLAGS) -c $<

$(NAME) : $(OBJECT)
	ar -rcs $(NAME) $(OBJECT)

all : $(NAME)

clean :
	rm -rf $(OBJECT)
fclean : clean
	rm -rf libftprintf.a
re : fclean all
	
