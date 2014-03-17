##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Mon Mar 17 17:41:43 2014 matthieu raynaud de fitte
## Last update Fri Feb 14 00:26:09 2014 a
##


# Makefile du serveur

NAME	= 	bin_1

SRCS	= 	main.c

OBJS	= 	$(SRCS:.c=.o)

CFLAGS	= 	-Wall -Wextra -g3


all	:	$(NAME)

$(NAME)	:	$(OBJS)
		cc -o $(NAME) $(OBJS) libmy.a

clean	:
		rm -f $(OBJS)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all



## commandes supplémentaires ( debug et autres )

abs	:	make_1 fclean make_3 $(NAME)
		@echo -e '\033[0;33m (3/4) >> suppression des objets \033[0m'
		rm -f $(OBJS)
		@echo -e '\033[0;33m (4/4) >> la compilation a réussie\033[0m'
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

val	:	abs
		@echo -e '\033[0;35m        ===>> utilisation de valgrind pour tester le programme <<===\033[0m'
		valgrind -v -q --track-origins=yes ./$(NAME)

v	:
		valgrind -v -q --track-origins=yes ./$(NAME)



make_1	:
		@echo -e '\033[0;33m (1/4) >> suppression des fichiers temporaires\033[0m'

make_3	:
		@echo -e '\033[0;33m (2/4) >> \033[0;35mcompilation du '$(NAME)'\033[0m'

.PHONY	:	all abs cat clean clear ech env exe fclean lib make_1 make_3 re v val
