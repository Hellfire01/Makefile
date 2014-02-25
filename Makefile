##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Tue Feb 25 17:15:07 2014 matthieu raynaud de fitte
## Last update Fri Feb 14 00:26:09 2014 a
##



NAME	=	binaire

SRCS	=	main.c



CAT	=	cat -e

CC      =       cc

CD	=	cd

CFLAGS  =	-W -Wall -Wextra

CLEAR	=	clear

ENV	=	env -i

FLAG1	=	*~

FLAG2	=	*\#

ECHO_V	=	echo |

EXE     =       ./

LIB	=	libmy.a

LIB-DIR	=	my_lib

LS      =       ls -a --color

MINILIB	=	-L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11

OBJS    =       $(SRCS:.c=.o)

RM	=	rm -f



all	:	lib $(NAME)

abs	:	clear tot re
		$(RM) $(OBJS)
		$(LS)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB) $(#MINILIB)

clean	:
		$(RM) $(OBJS)

clear	:
		$(CLEAR)

env     :       abs
		$(ENV) $(EXE)$(NAME)

exe	:	abs
		$(EXE)$(NAME)

fclean	:	clean
		$(RM) $(NAME)

lib	:
		$(CD) $(LIB-DIR) && $(MAKE)

re	:	fclean all

test1	:	abs
		$(ECHO_V) $(EXE)$(NAME)

test2	:	abs
		$(EXE)$(NAME) | $(CAT)

tot	:
		$(RM) $(FLAG1)
		$(RM) $(FLAG2)

.PHONY	:	all abs clean clear env exe fclean lib re test1 test2 tot
