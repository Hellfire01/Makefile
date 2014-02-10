/*
** my_put_nbr.c for my_put_nbr in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:32:59 2013 a
** Last update Mon Feb 10 16:18:07 2014 a
*/

#include "my.h"

int	my_put_nbr_base(int nbr, char *base)
{
  int	nbrc;
  int	basemax;

  basemax = 0;
  nbrc = 1;
  while (base[basemax] != '\0')
    basemax = basemax + 1;
  if (nbr < 0)
    {
      my_putchar('-');
      nbr = nbr *(-1);
    }
  if (nbr == 0)
    {
      my_putchar(base[0]);
      return (nbr);
    }
  while (nbrc < nbr)
    nbrc = nbrc * basemax;
  if (nbrc > nbr)
    nbrc = nbrc / basemax;
  while (nbrc >= 1)
    {
      my_putchar(base[(nbr / nbrc) % basemax]);
      nbrc = nbrc / basemax;
    }
  return (nbr);
}
