GCCFLAG=-Wall -Wextra -Werror
NAME=libftprintf.a
FOLDER_SRCS=srcs
FOLDER_INC=includes

all: 
	gcc $(GCCFLAG) -c $(FOLDER_SRCS)/*.c
	ar rc $(NAME) *.o
clean:
	@rm -f $(FOLDER_INC)/*.gch
	@rm *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
