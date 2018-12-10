CC = gcc -Wall -Wextra -Werror
KALFUNC = kal_*.c
NAME =	libkal.a
KALOBJ =	*.o
_RED = \x1b[31m
_GREY = \x1b[30m
_GREEN = \x1b[32m
_YELLOW = \x1b[33m
_BLUE = \x1b[34m
_PURPLE = \x1b[35m
_CYAN = \x1b[36m
_WHITE = \x1b[37m

all : $(NAME)

$(NAME) : 	
	@ $(CC) -c $(KALFUNC)
	@ ar -rc $(NAME) $(KALOBJ)
	@ ranlib $(NAME)
	@ echo -e "$(_RED)Compilation end$(_WHITE)"

clean :
	@ rm -f *.o
	@ echo -e "$(_GREEN)Clear"

fclean : clean
	@ rm -f $(NAME)

re : fclean all

test : re 
	@ $(CC) -o test.out main.c $(NAME)
	@ ./test.out
	@ rm -f test.out
	@ echo -e "\n$v(_CYAN)Test end"