/*
** my_putstr.c for my_putstr in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:36:38 2013 a
** Last update Sun Mar 23 14:44:31 2014 matthieu raynaud de fitte
*/

#include <unistd.h>
#include "my.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
