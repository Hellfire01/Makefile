##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Wed Feb 26 21:17:25 2014 matthieu raynaud de fitte
## Last update Fri Feb 14 00:26:09 2014 a
##



NAME    =       binaire

SRCS    =       main.c


CAT	=	cat -e

CC      =       cc

CD	=	cd

CFLAGS  =	-W -Wall -Wextra

CLEAR	=	clear

ENV	=	env -i

FLAG1	=	*~

FLAG2	=	*\#

ECHO	=	echo -e

ECHO_V	=	echo |

EXE     =       ./

LIB	=	libmy.a

LIB-DIR	=	my_lib

LS      =       ls -a --color

MINILIB	=	-L/usr/lib64 -lmlx_$(HOSTTYPE) -L/usr/lib64/X11 -lXext -lX11

OBJS    =       $(SRCS:.c=.o)

RM	=	rm -f



all	:	disp1 lib disp2 $(NAME)

all_bis	:	disp1_5 lib disp2_5 $(NAME)

abs	:	clear disp0_5 tot fclean all_bis
		$(RM) $(OBJS)
		@$(ECHO) '\033[0;32m (4/4) >> compilation réussie\033[0m'
		$(LS)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(LIB) $(#MINILIB)

clean	:
		$(RM) $(OBJS)

clear	:
		$(CLEAR)

disp0	:
		@$(ECHO) '\033[0;32m>> suppression des fichiers temporaires  \033[0m'

disp0_5 :
		@$(ECHO) '\033[0;32m (1/4) >> suppression des fichiers temporaires\033[0m'

disp1	:	
		@$(ECHO) '\033[0;32m>> compilation de la libmy.a \033[0m'

disp1_5	:
		@$(ECHO) '\033[0;32m (2/4) >> compilation de la libmy.a\033[0m'

disp2	:	
		@$(ECHO) '\033[0;32m>> compilation du' $(NAME) '\033[0m'

disp2_5	:
		@$(ECHO) '\033[0;32m (3/4) >> compilation du' $(NAME) '\033[0m'

disp3	:
		@$(ECHO) '\033[0;35m        ===>> éxécution du binaire <<===\033[0m'

env     :       abs disp3
		$(ENV) $(EXE)$(NAME)

exe	:	abs disp3
		$(EXE)$(NAME)

fclean	:	clean
		$(RM) $(NAME)

lib	:
		$(CD) $(LIB-DIR) && $(MAKE)

re	:	fclean all

test1	:	abs disp3
		$(ECHO_V) $(EXE)$(NAME)

test2	:	abs disp3
		$(EXE)$(NAME) | $(CAT)

tot	:
		$(RM) $(FLAG1)
		$(RM) $(FLAG2)

.PHONY	:	all all_bis abs clean clear disp0 disp0_5 disp1 disp1_5 disp2 disp2_5 \
		disp3 env exe fclean lib re test1 test2 tot
