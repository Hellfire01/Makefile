/*
** my_put_doublechar.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Fri Jan 24 02:29:50 2014 a
** Last update Fri Apr 25 19:37:05 2014 mat
*/

#include <stdlib.h>
#include "my.h"

/*
** la fonction my_put_doublechar affiche tout le contenu d'un tableau de char.
** ATTENTION ! ==> il n'affiche pas les lignes vides même s'il y en a
*/

void	my_put_doublechar(char **str)
{
  int   a;

  a = 0;
  while (str[a] != NULL)
    {
      my_putstr(str[a]);
      my_putchar('\n');
      a = a + 1;
    }
}

/*
** le seconde fontion sert exclusivement pour le debug
*/

void	my_put_doublechar2(char **str)
{
  int	a;

  a = 0;
  while (str[a] != NULL)
    {
      c_str("\"", 'y');
      my_putstr(str[a]);
      c_str("\"", 'y');
      if (str[a][0] == '\0')
	c_str(" ==> ligne vide", 'y');
      my_putchar('\n');
      a = a + 1;
    }
}
