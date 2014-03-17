/*
** color_str.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by matthieu raynaud de fitte
** Login   <raynau_a@epitech.net>
** 
** Started on  Sat Feb 22 18:49:16 2014 matthieu raynaud de fitte
** Last update Fri Mar 14 14:16:07 2014 matthieu raynaud de fitte
*/

#include "my.h"

/*
** c_str() est un my_putstr() en couleur
** en cas d'erreur, aucune couleur n'est mise
*/

int	c_str(char *str, char color)
{
  my_color(color);
  my_putstr(str);
  my_putstr("\033[0;0m");
  return (0);
}

/*
** r ==> red
** g ==> green
** y ==> yellow
** b ==> blue
** p ==> purple
** c ==> cyan
** e ==> grey
** w ==> white
*/

void	my_color(char c)
{
  if (c == 'r')
    my_putstr("\033[1;31m");
  else if (c == 'g')
    my_putstr("\033[1;32m");
  else if (c == 'y')
    my_putstr("\033[1;33m");
  else if (c == 'b')
    my_putstr("\033[1;34m");
  else if (c == 'p')
    my_putstr("\033[1;35m");
  else if (c == 'c')
    my_putstr("\033[1;36m");
  else if (c == 'e')
    my_putstr("\033[1;37m");
  else if (c == 'w')
    my_putstr("\033[0;0m");
}

/*
** Cette fonction est une vertion plus optimisée de my_putstr() et de c_str()
*/

int     strp(char *str)
{
  int   i;
  int	ret;

  while (str[i] != '\0')
    {
      if ((ret = my_strlen(str)) > 2)
	if (str[i] == '%' && my_isin(str[i + 1], "rgybpcew") == 1)
	  {
	    my_color(str[i + 1]);
	    ret = ret - 2;
	    i = i + 2;
	  }
      my_putchar(str[i]);
      i = i + 1;
    }
  my_putstr("\033[0;0m");
  return (ret);
}
