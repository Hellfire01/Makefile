/*
** color_str.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by matthieu raynaud de fitte
** Login   <raynau_a@epitech.net>
** 
** Started on  Sat Feb 22 18:49:16 2014 matthieu raynaud de fitte
** Last update Thu Aug 14 22:09:51 2014 mat
*/

#include <unistd.h>
#include "my.h"

/*
** c_str() est un my_putstr() en couleur
** en cas d'erreur, aucune couleur n'est mise
** r ==> red
** g ==> green
** y ==> yellow
** b ==> blue
** p ==> purple
** c ==> cyan
** e ==> grey
** w ==> white
*/

static void	my_color(int c)
{
  char	*colors[8];
  
  colors[0] = "\033[1;31m";
  colors[1] = "\033[1;32m";
  colors[2] = "\033[1;33m";
  colors[3] = "\033[1;34m";
  colors[4] = "\033[1;35m";
  colors[5] = "\033[1;36m";
  colors[6] = "\033[1;37m";
  colors[7] = "\033[0;0m";
  my_putstr(colors[c]);
}

void	c_str(char *str, char color)
{
  int	c;

  c = my_isin2(color, "rgybpcew");
  if (c != -1)
    my_color(c);
  my_putstr(str);
  write(1, "\033[0;0m", 6);
}

/*
** Cette fonction est une vertion plus optimisée de my_putstr() et de c_str()
*/

void	strp(char *str)
{
  int   i;
  int	tmp;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '%')
        {
          i += 1;
          if ((tmp = my_isin2(str[i], "rgybpcew")) != -1)
            {
              my_color(tmp);
              i += 1;
            }
          else
            i -= 1;
        }
      else
	my_putchar(str[i++]);
    }
  my_color(7);
}
