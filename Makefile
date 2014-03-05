##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Wed Mar  5 17:28:30 2014 matthieu raynaud de fitte
## Last update Fri Feb 14 00:26:09 2014 a
##

NAME	= 	binaire

SRCS	= 	main.c

OBJ	= 	$(SRCS:.c=.o)

CFLAGS	= 	-W -Wall -Wextra

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		cc -o $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

## commandes supplémentaires
abs	:	make_1 make_2 make_3 $(NAME)
		$(RM) $(OBJS)
		@echo -e '\033[0;32m (4/4) >> la compilation a réussie\033[0m' 
		ls -a --color

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

lib	:
		cd lib && make

old	:
		rm -f *~ *\#

make_1	:
		clear
		@echo -e '\033[0;32m (1/4) >> suppression des fichiers temporaires\033[0m'

make_2	:	old fclean
		@echo -e '\033[0;32m (2/4) >> compilation de la libmy.a\033[0m'

make_3	:	lib
		@echo -e '\033[0;32m (3/4) >> compilation de votre "'$(NAME)'"\033[0m'

.PHONY:	all abs cat clean clear ech env exe fclean lib make_1 make_2 make_3 old re
