/*
** my_getnbr.c for my_getnbr in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:39:20 2013 a
** Last update Tue Oct 29 19:36:15 2013 a
*/

#include	"my.h"

int	neg(char *str, char *base, int basemax)
{
  int	countera;
  int 	counterb;

  countera = 0;
  counterb = 0;
  while (str[countera] > base[basemax] || str[countera] < base[0])
    {
      if (str[countera] == '-')
	counterb = counterb + 1;
      countera = countera + 1;
    }
  if (counterb % 2 != 0)
    return (1);
  else
    return (0);
}

int	number(char c, char *base)
{
  int	counter;

  counter = 0;
  while (base[counter] != c)
    {
      counter = counter + 1;
      if (base[counter] == '\0')
	return (0);
    }
  if (base[counter] = c)
    return (1);
  else
    return (0);
}


int	my_getnbr_base(char *str, char *base)
{
  int	counter;
  int	nbr;
  int	basemax;

  nbr = 0;
  counter = 0;
  basemax = 0;
  while (base[basemax] != '\0')
    basemax = basemax + 1;
  while (number(str[counter], base) == 0 && str[counter] != '\0')
    counter = counter + 1;
  while (number(str[counter], base) == 1)
    {
      nbr = nbr * base[basemax] + counter;
      counter = counter + 1;
    }
  if (neg(str, base, basemax) == 1)
    nbr = nbr * (-1);
  return (nbr);
}
