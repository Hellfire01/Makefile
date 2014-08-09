/*
** my_free_doublechar.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Fri Jan 24 02:32:59 2014 a
** Last update Mon Aug  4 16:47:26 2014 mat
*/

#include <stdlib.h>
#include "my.h"

/*
** la fonction my_free_tab libère tout le contenu d'un tableau de
**    string puis le tableau lui même.
*/

void     my_free_tab(char **tab)
{
  int   i;

  i = 0;
  while (tab[i] != NULL)
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}
