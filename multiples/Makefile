##
## Makefile for norme in /home/raynau_a/test-zone/window_test
## 
## Made by a
## Login   <raynau_a@epitech.net>
## 
## Started on  Wed Dec  4 14:06:06 2013 a
## Last update Mon Mar 17 17:38:30 2014 matthieu raynaud de fitte
## Last update Fri Feb 14 00:26:09 2014 a
##

## attention ! chaque dossier doit avoir le nom de son bianire !

BIN_1	=	bin_1

BIN_2	=	bin_2

all	:	lib
		cp libmy.a $(BIN_2)/libmy.a
		cp libmy.a $(BIN_1)/libmy.a
		cp my.h $(BIN_2)/my.h
		cp my.h $(BIN_1)/my.h
		cd $(BIN_2) && make all
		cd $(BIN_1) && make all
		cp $(BIN_2)/$(BIN_2) bin/$(BIN_2)
		cp $(BIN_1)/$(BIN_1) bin/$(BIN_1)

bin_2	:	lib
		cp libmy.a $(BIN_2)/libmy.a
		cp my.h $(BIN_2)/my.h
		cd $(BIN_2) && make all
		cp $(BIN_2)/$(BIN_2) bin/$(BIN_2)

bin_1	:	lib
		cp libmy.a $(BIN_1)/libmy.a
		cp my.h $(BIN_1)/my.h
		cd $(BIN_1) && make all
		cp $(BIN_1)/$(BIN_1) bin/$(BIN_1)

clean	:
		cd lib && make clean
		cd $(BIN_2) && make clean
		cd $(BIN_1) && make clean

fclean	:
		cd lib && make fclean
		cd $(BIN_2) && make fclean
		cd bin && rm -f $(BIN_2)
		cd $(BIN_1) && make fclean
		cd bin && rm -f $(BIN_1)

re	:
		cd lib && make re
		cd $(BIN_2) && make re
		cd $(BIN_1) && make re

lib	:
		cd lib && make all



## version couleur

abs	:
		clear
		@echo -e '\n\n\n\n\n\n\n\033[0;32m (1/6) >> compilation de la lib\033[0m'
		cd lib && make abs
		@echo -e '\n\033[0;32m (2/6) >> copie de la lib et du my.h\033[0m'
		cp libmy.a $(BIN_2)/libmy.a
		cp libmy.a $(BIN_1)/libmy.a
		cp my.h $(BIN_2)/my.h
		cp my.h $(BIN_1)/my.h
		@echo -e '\033[0;32m (3/6) >> compilation du '$(BIN_2)'\033[0m\n'
		cd $(BIN_2) && make abs
		@echo -e '\n\033[0;32m (4/6) >> compilation du '$(BIN_1)'\033[0m\n'
		cd $(BIN_1) && make abs
		@echo -e '\n\033[0;32m (5/6) >> suppression des objets \033[0m'
		cd $(BIN_2) && make clean
		cd $(BIN_1) && make clean
		@echo -e '\033[0;32m (6/6) >> copie des binaires dans le bin\033[0m'
		cp $(BIN_2)/$(BIN_2) bin/$(BIN_2)
		cp $(BIN_1)/$(BIN_1) bin/$(BIN_1)
		@echo -e ''
		ls -a --color
		@echo -e ''

.PHONY	:	all abs clean fclean lib re $(BIN_1) $(BIN_2)
