/*
** my_put_nbr.c for my_put_nbr in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:32:59 2013 a
** Last update Mon Feb 10 16:18:17 2014 a
*/

#include "my.h"

void    my_putnbr(int nb)
{
  int   neg;

  neg = 0;
  if (nb < 0)
    {
      my_putchar('-');
      if (nb == -2147483648)
        {
          neg = 1;
          nb++;
        }
      nb = nb * -1;
    }
  if (nb >= 10)
    my_putnbr(nb / 10);
  if (neg == 1)
    {
      neg = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}
