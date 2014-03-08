##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Sat Mar  8 18:12:03 2014 matthieu raynaud de fitte
## Last update Fri Feb 14 00:26:09 2014 a
##

NAME	= 	binaire

SRCS	= 	main.c

OBJS	= 	$(SRCS:.c=.o)

CFLAGS	= 	-W -Wall -Wextra -g3

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		cc -o $(NAME) $(OBJS) libmy.a

clean	:
		rm -f $(OBJS)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

## commandes supplémentaires
abs	:	make_1 make_2 make_3 $(NAME)
		@echo -e '\033[0;32m (4/5) >> suppression des objets \033[0m'
		rm -f $(OBJS)
		@echo -e '\033[0;32m (5/5) >> la compilation a réussie\033[0m'
		@echo -e '' 
		ls -a --color
		@echo -e ''

cat	:	abs
		@echo -e '\033[0;35m        ===>> éxécution du binaire avec cat -e <<===\033[0m'
		./$(NAME) | cat -e

ech	:	abs
		@echo -e '\033[0;35m        ===>> éxécution du binaire avec echo | <<===\033[0m'
		echo | ./$(NAME)

env	:	abs
		@echo -e '\033[0;35m        ===>> éxécution du binaire sans environnement <<===\033[0m'
		env -i ./$(NAME)

exe	:	abs
		@echo -e '\033[0;35m        ===>> éxécution du binaire <<===\033[0m'
		./$(NAME)

val	:	abs
		@echo -e '\033[0;35m        ===>> utilisation de valgrind pour tester le programme <<===\033[0m'
		valgrind -v -q --track-origins=yes ./$(NAME)

## autres commandes qui peuvent se révéler utiles
v	:
		valgrind -v -q --track-origins=yes ./$(NAME)

lib	:
		cd lib && make

old	:
		rm -f *~ *\# $(OJBS)



make_1	:
		clear
		@echo -e '\033[0;32m (1/5) >> suppression des fichiers temporaires\033[0m'

make_2	:	old fclean
		@echo -e '\033[0;32m (2/5) >> compilation de la libmy.a\033[0m'

make_3	:	lib
		@echo -e ''
		@echo -e '\033[0;32m (3/5) >> compilation de \033[0;35m"'$(NAME)'"\033[0m'

.PHONY:	all abs cat clean clear ech env exe fclean lib make_1 make_2 make_3 old re
