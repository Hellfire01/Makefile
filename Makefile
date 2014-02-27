##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Thu Feb 27 19:36:26 2014 matthieu raynaud de fitte
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
abs	:	disp1 fclean disp2 lib disp3 $(NAME)
		$(RM) $(OBJS)
		@echo -e '\033[0;32m (4/4) >> compilation réussie\033[0m' 
		ls -a --color

cat     :       abs disp3
		./$(NAME) | cat -e

ech     :       abs disp4
		echo | ./$(NAME)

env     :       abs disp4
		env -i ./$(NAME)

exe     :       abs disp4
		./$(NAME)

lib	:
		cd my_lib && make

## outils des commandes supplémentaires
disp1 	:
		clear
		@echo -e '\033[0;32m (1/4) >> suppression des fichiers temporaires\033[0m'
		rm -f *~ *\#

disp2	:
		@echo -e '\033[0;32m (2/4) >> compilation de la libmy.a\033[0m'

disp3	:
		@echo -e '\033[0;32m (3/4) >> compilation du "'$(NAME)'"\033[0m'

disp4	:
		@echo -e '\033[0;35m        ===>> éxécution du binaire <<===\033[0m'

.PHONY	:	all abs $(NAME) cat clean clear disp1 disp2 disp3 disp4 ech env exe fclean lib re
