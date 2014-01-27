/*
** my_put_doublechar.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Fri Jan 24 02:29:50 2014 a
** Last update Mon Jan 27 21:40:29 2014 a
*/

#include <stdlib.h>

/*
** la fonction my_put_doublechar affiche tout le contenu d'un tableau de char.
*/

int     my_put_doublechar(char **str)
{
  int   a;

  a = 0;
  while (str[a] != NULL)
    {
      my_putstr(str[a]);
      my_putchar('\n');
      a = a + 1;
    }
  return (0);
}
