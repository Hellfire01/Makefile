/*
** my_strlen.c for my_strlen in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:38:12 2013 a
** Last update Wed Jul 30 17:21:18 2014 mat
*/

#include <stdlib.h>
#include "my.h"

int	my_strlen(char *str)
{
  int	counter;

  counter = 0;
  if (str == NULL)
    return (0);
  while (str[counter] != '\0')
    counter = counter + 1;
  return (counter);
}
