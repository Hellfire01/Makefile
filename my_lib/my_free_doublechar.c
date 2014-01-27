/*
** my_free_doublechar.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Fri Jan 24 02:32:59 2014 a
** Last update Fri Jan 24 02:37:57 2014 a
*/

#include <stdlib.h>

/*
** la fonction my_free_doublechar libère tout le contenu d'un tableau de char.
*/

int     my_free_doublechar(char **str)
{
  int   i;

  i = 0;
  while (str[i] != NULL)
    {
      free(str[i]);
      i++;
    }
  return (0);
}
