/*
** tab_somme.c for header in /home/raynau_a/rendu/Allum1/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Thu Feb 13 20:48:54 2014 a
** Last update Fri Feb 21 22:17:24 2014 matthieu raynaud de fitte
*/

#include "my.h"

/*
** Cette fonction vise à renvoyer la somme du contenu d'un tableau d'int
*/

int	tab_produit(int *tab, int lignes)
{
  int	i;
  int	out;
  char	*message;

  i = 0;
  out = 0;
  message = "WARNING : le nombre est trop grand pour un int\n";
  while (i < lignes)
    {
      if (out >= 214748364 && tab[i] >= 7)
        {
          my_putstr(message);
          return (0);
        }
      out = out + tab[i];
      i = i + 1;
    }
  return (out);
}
