/*
** my_putstr.c for my_putstr in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:36:38 2013 a
** Last update Mon Feb 10 16:24:23 2014 a
*/

#include "my.h"

void	my_putstr(char *src)
{
  int	counter;

  counter = 0;
  while (src[counter] != '\0')
    my_putchar(src[counter++]);
}
