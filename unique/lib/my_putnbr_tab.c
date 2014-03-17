/*
** my_putnbr_tab.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/lib
** 
** Made by matthieu raynaud de fitte
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Mar  5 01:34:23 2014 matthieu raynaud de fitte
** Last update Wed Mar  5 01:51:44 2014 matthieu raynaud de fitte
*/

#include "my.h"

/*
** cette fonction vise à afficher un tableau d'int
*/

void	my_tab_put(int *tab, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      my_putnbr(tab[i]);
      if (i < (size - 1))
	my_putchar(' ');
      i = i + 1;
    }
}
