##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Mon Feb  3 23:21:22 2014 a
##



NAME	=	binaire

SRCS	=	main.c



CC      =       clang

CD	=	cd

CFLAGS  =	-Wall -Wextra

FLAG1	=	*~

FLAG2	=	*\#

CLEAR   =       clear

EXE     =       ./

LIB	=	libmy.a

LIB-DIR	=	my_lib

LS      =       ls

MINILIB	=	-L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11

OBJS    =       $(SRCS:.c=.o)

RM	=	rm -f



all	:	make_lib $(NAME)

abs	:	clear tot all clean
		$(LS)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB) #$(#MINILIB)

clean	:
		$(RM) $(OBJS)

clear	:
		$(CLEAR)

exe	:	abs
		$(EXE)$(NAME)

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

.PHONY	:	all abs clean clear exe fclean lib make_lib re spe tot
