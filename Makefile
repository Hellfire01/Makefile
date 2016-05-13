# the super Makefile

SRCS	=	main.cpp					\
		utils/color_str.cpp				\
		utils/epur_str.cpp				\
		exception/MyException.cpp

have_term := $(shell echo $$TERM)
nope    = xterm

ifneq ($(have_term), $(nope))
    my_color = @echo $1
else
    define my_color =
        @-tput setaf $2
        @-tput bold
        @echo $1
        @-tput sgr0
    endef
endif

ifneq ($(have_term), $(nope))
    my_double_color = @echo $1
else
    define my_double_color =
        @echo $(have_term)
        @-tput setaf $2
        @-tput bold
        @echo -n $1
        @-tput setaf $4
        @-tput bold
        @echo $3
        @-tput sgr0
    endef
endif

CXX	= @clang++

RM	= @rm -rfv

NAME	= binary
SRCDIR	= sources
OBJDIR	= .obj
INCDIR	= includes

CFLAGS	+= -W -Wall -Wextra
CFLAGS  += -std=c++11
CFLAGS  += -I $(INCDIR)
#decomment for debug
#CFLAGS  += -g3

OBJS	=	$(SRCS:%.cpp=$(OBJDIR)/%.o)

all	: 	info $(OBJS)
	$(call my_color, "Linking $(NAME) ...", 3)
	$(CXX)  -o $(NAME) $(OBJS) $(CFLAGS)

$(OBJDIR)/%.o:	$(SRCDIR)/%.cpp
	@mkdir -p $(addprefix $(OBJDIR)/, $(SRCS))
	$(call my_color, "     Compiling $<", 2)
	$(CXX) -o $@ -c $< $(CFLAGS)

clean	:
	$(call my_color, "deleting obj folder ...", 4)
	$(RM) $(OBJDIR)

fclean	:	clean
	$(call my_color, "deleting binary ...", 4)
	$(RM) $(NAME)

info	:
	@echo ""
	$(call my_color, "Compiling "$(NAME), 5)
	@echo ""
	$(call my_double_color, "Flags are : ", 1, $(CFLAGS), 6)


re	:	fclean all

test	:	fclean all clean

.PHONY: all clean fclean info re test
