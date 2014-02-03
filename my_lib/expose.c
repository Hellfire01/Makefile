/*
** expose.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Mon Feb  3 16:10:18 2014 a
** Last update Mon Feb  3 17:47:54 2014 a
*/

/*
** expose() calcule nbr^expose et retourne -1 en cas d'erreur.
** les ints ne pouvant prendre de virgules, expose() renvoie 0 si expose est
**    négatif.
*/

#include "my.h"

int     expose(int nbr, int exposant)
{
  int   out;

  out = 0;
  if (exposant == 0)
    return (1);
  else if (exposant < 0 || nbr == 0)
    return (0);
  else if (exposant > 0)
    {
      out = expose2(nbr, exposant);
      return (out);
    }
  else
    return (-1);
}

int     expose2(int nbr, int exposant)
{
  int   out;
  int   i;

  out = nbr;
  i = 1;
  while (i < exposant)
    {
      out = out * nbr;
      i = i + 1;
    }
  return (out);
}

