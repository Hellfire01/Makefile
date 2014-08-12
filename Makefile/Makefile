##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Tue Aug 12 01:07:49 2014 mat
## Last update Fri Feb 14 00:26:09 2014 a
##


NAME	= 	binaire

LIB	=	lib/my_putchar.c	\
		lib/my_isin.c		\
		lib/my_putnbr.c		\
		lib/my_put_nbr_base.c	\
		lib/my_swap.c		\
		lib/my_putstr.c		\
		lib/my_strlen.c		\
		lib/my_getnbr.c		\
		lib/my_getnbr_base.c	\
		lib/my_strcmp.c		\
		lib/my_put_tab.c	\
		lib/my_putnbr_tab.c	\
		lib/my_strdup.c		\
		lib/my_free_tab.c	\
		lib/str_init.c		\
		lib/color_str.c		\
		lib/correct.c		\
		lib/my_scan.c		\
		lib/errors.c		\
		lib/my_strcat.c

SRCS	= 	sources/main.c

OBJS	= 	$(SRCS:.c=.o)

LOBJS	=	$(LIB:.c=.o)

CFLAGS	+= 	-Wall -Wextra -g3
CFLAGS	+=	-I ./includes

LIBX    =       -L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/x11 -lXext -lX11


all	:	$(NAME)

$(NAME)	:	$(OBJS) $(LOBJS)
		gcc -o $(NAME) $(OBJS) $(LOBJS) $(#LIBX)

clean	:
		cd lib && make clean
		rm -f $(OBJS)

fclean	:	clean
		cd lib && make fclean
		rm -f $(NAME)
		rm -f bin/$(NAME)

re	:	fclean all

## à partir d'ici ce ne sont que des commandes aditionnelles

go	:
		clear
		./$(NAME)

gov	:
		clear
		valgrind -v -q ./$(NAME)

govplus	:
		clear
		valgrind -v -q --leak-check=full ./$(NAME)

exe	:	abs
		@echo -e '\033[0;32m execution de :\n=== \033[0;36m'$(NAME)'\033[0;32m === \033[0m'
		./$(NAME)

val	:	abs
		@echo -e '\033[0;32m execution de :\n=== \033[0;36m'$(NAME)'\033[0;32m === \033[0m'
		valgrind -v -q ./$(NAME)

abs	:	abs_0 $(NAME)
		@echo -e '\033[0;32m (3/4) >> suppression des objets \033[0m'
		rm -f $(OBJS)
		rm -f $(LOBJS)
		@echo -e '\033[0;32m (4/4) >> la compilation a réussie\033[0m'
		@echo -e '' 
		ls -a --color
		@echo -e ''

abs_0	:
		clear
		@echo -e '\033[0;32m (1/4) >> suppression des fichiers temporaires\033[0m'
		rm -f $(OBJS)
		rm -f $(NAME)
		@echo -e '\033[0;32m (2/4) >> compilation de \033[0;35m"'$(NAME)'"\033[0m'

.PHONY	:	all abs abs_0 clean clear exe fclean go gov govplus re val
