/*
** my_put_doublechar.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Fri Jan 24 02:29:50 2014 a
** Last update Wed Mar  5 01:42:00 2014 matthieu raynaud de fitte
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
