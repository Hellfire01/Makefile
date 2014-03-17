/*
** my_putchar.c for putchar in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 14:30:56 2013 a
** Last update Mon Feb 10 16:23:20 2014 a
*/

#include "my.h"
#include <unistd.h>

void	my_putchar(char	c)
{
  write(1, &c, 1);
}
