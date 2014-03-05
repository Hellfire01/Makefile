/*
** my_strlen.c for my_strlen in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:38:12 2013 a
** Last update Mon Feb 10 16:19:09 2014 a
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	counter;

  counter = 0;
  while (str[counter] != '\0')
    counter = counter + 1;
  return (counter);
}
