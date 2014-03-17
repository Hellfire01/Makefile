/*
** my_strdup.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Fri Jan 24 02:30:46 2014 a
** Last update Mon Feb 10 16:18:46 2014 a
*/

#include <stdlib.h>
#include "my.h"

/*
** my_strdup malloc une chaine de caractères et renvoie un pointeur sue la
**    première lettre.
** renvoie NULL si le malloc echoue
*/

char    *my_strdup(char *str)
{
  int   i;
  char  *out;

  i = 0;
  out = malloc(my_strlen(str) + 1);
  if (out == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      out[i] = str[i];
      i = i + 1;
    }
  out[i] = '\0';
  return (out);
}
