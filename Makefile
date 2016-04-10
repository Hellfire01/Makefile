# the super Makefile

SRCS	=	main.cpp

define my_color
    @tput setaf $2
    @tput bold
    @echo $1
    @tput sgr0
endef

define my_double_color
    @tput setaf $2
    @tput bold
    @echo -n $1
    @tput setaf $4
    @tput bold
    @echo $3
    @tput sgr0
endef

COMP	= @clang++
FILE	= cpp

RM	= @rm -rfv

NAME	= binary
SRCDIR	= sources
OBJDIR	= .obj
INCDIR	= includes

CFLAGS	+= -W -Wall -Wextra
CFLAGS  += -std=c++11
CFLAGS  += -I $(INCDIR)
#décommenter pour debug
#CFLAGS  += -g3

OBJS	=	$(SRCS:%.$(FILE)=$(OBJDIR)/%.o)

all	: 	info $(OBJS)
	$(call my_color, "Linking $(NAME) ...", 3)
	$(COMP)  -o $(NAME) $(OBJS) $(CFLAGS)

$(OBJDIR)/%.o:	$(SRCDIR)/%.$(FILE)
	@mkdir -p $(addprefix $(OBJDIR)/, $(SRCS))
	$(call my_color, "     Compiling $<", 2)
	$(COMP) -o $@ -c $< $(CFLAGS)

clean	:
	$(call my_color, "deleting obj folder ...", 4)
	$(RM) .obj

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
