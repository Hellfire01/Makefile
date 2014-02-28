##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Fri Feb 28 16:14:22 2014 matthieu raynaud de fitte
## Last update Fri Feb 14 00:26:09 2014 a
##



NAME    =       binaire

SRCS    =       main.c

CFLAGS  =	-W -Wall -Wextra

MINILIB	=	-L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11

OBJS    =       $(SRCS:.c=.o)


all	:	$(NAME)

$(NAME) :       $(OBJS)
		gcc -o $(NAME) $(OBJS) libmy.a $(#MINILIB)

clean   :
		rm -f $(OBJS)

fclean  :       clean
		rm -f $(NAME)

re      :       fclean all


## commandes supplémentaires
abs	:	make_1 make_2 make_3 $(NAME)
		$(RM) $(OBJS)
		@echo -e '\033[0;32m (4/4) >> compilation réussie\033[0m' 
		ls -a --color

cat     :       abs
		@echo -e '\033[0;35m        ===>> éxécution du binaire avec cat -e <<===\033[0m'
		./$(NAME) | cat -e

ech     :       abs
		@echo -e '\033[0;35m        ===>> éxécution du binaire avec echo | <<===\033[0m'
		echo | ./$(NAME)

env     :       abs
		@echo -e '\033[0;35m        ===>> éxécution du binaire sans environnement <<===\033[0m'
		env -i ./$(NAME)

exe     :       abs
		@echo -e '\033[0;35m        ===>> éxécution du binaire <<===\033[0m'
		./$(NAME)

lib	:
		cd my_lib && make


make_1 	:
		clear
		@echo -e '\033[0;32m (1/4) >> suppression des fichiers temporaires\033[0m'
		rm -f *~ *\#

make_2	:	fclean
		@echo -e '\033[0;32m (2/4) >> compilation de la libmy.a\033[0m'

make_3	:	lib
		@echo -e '\033[0;32m (3/4) >> compilation du "'$(NAME)'"\033[0m'

.PHONY	:	all abs $(NAME) cat clean clear make_1 make_2 make_3 ech env exe fclean lib re
