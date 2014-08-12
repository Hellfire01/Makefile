/*
** my_put_doublechar.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Fri Jan 24 02:29:50 2014 a
** Last update Mon Aug  4 16:45:35 2014 mat
*/

#include <stdlib.h>
#include "my.h"

/*
** la fonction my_put_doublechar affiche tout le contenu d'un tableau de char.
** ATTENTION ! ==> il n'affiche pas les lignes vides même s'il y en a
*/

void	my_put_tab(char **tab)
{
  int   a;

  a = 0;
  while (tab[a] != NULL)
    {
      my_putstr(tab[a]);
      my_putchar('\n');
      a = a + 1;
    }
}

/*
** le seconde fontion sert exclusivement pour le debug
*/

void	my_put_tab2(char **tab)
{
  int	a;

  a = 0;
  while (tab[a] != NULL)
    {
      c_str("\"", 'y');
      my_putstr(tab[a]);
      c_str("\"", 'y');
      if (tab[a][0] == '\0')
	c_str(" ==> ligne vide", 'y');
      my_putchar('\n');
      a = a + 1;
    }
}
