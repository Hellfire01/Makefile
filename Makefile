##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Wed Feb 19 19:22:53 2014 matthieu raynaud de fitte
## Last update Fri Feb 14 00:26:09 2014 a
##



NAME	=	binaire

SRCS	=	main.c



CC      =       gcc

CD	=	cd

CFLAGS  =	-W -Wall -Wextra

ENV	=	env -i

FLAG1	=	*~

FLAG2	=	*\#

CLEAR   =       clear

EXE     =       ./

LIB	=	libmy.a

LIB-DIR	=	my_lib

LS      =       ls -a --color

MINILIB	=	-L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11

OBJS    =       $(SRCS:.c=.o)

RM	=	rm -f



all	:	make_lib $(NAME)

abs	:	clear tot fclean all
		$(RM) $(OBJS)
		$(LS)
## commande utile ==> vous compillez avec flags et vous nettoie les fichiers temporaires


$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB) $(#MINILIB)

clean	:
		$(RM) $(OBJS)

clear	:
		$(CLEAR)

env     :       abs
		$(ENV) $(EXE)$(NAME)
## lance le bianaire sans environnement ( très recommandés pour le minilibX et le minishell )


exe	:	abs
		$(EXE)$(NAME)
## lance le binaire en plus


fclean	:	clean
		$(RM) $(NAME)

lib	:	make_lib

make_lib:
		$(CD) $(LIB-DIR) && $(MAKE)

re	:	fclean all

spe	:	clear all clean

tot	:
		$(RM) $(FLAG1)
		$(RM) $(FLAG2)

.PHONY	:	all abs clean clear env exe fclean lib make_lib re spe tot
