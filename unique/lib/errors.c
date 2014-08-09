/*
** errors.c for header in /home/mat/epitech/Makefile/unique/lib
** 
** Made by mat
** Login   <mat@epitech.net>
** 
** Started on  Fri Aug  1 16:17:50 2014 mat
** Last update Mon Aug  4 17:09:46 2014 mat
*/

#include <stdlib.h>
#include "my.h"

/*
** Ces fonctions servent exclusivement s'il faut afficher un message
**    et retourner une erreur
*/

void	tab_errors(int err)
{
  char	*tab_error[3];

  tab_error[0] = "The read has failed, leaving programm\n";
  tab_error[1] = "A malloc has failed, leaving programm\n";
  tab_error[2] = NULL;
  my_putstr(tab_error[err]);
}

int	errors(int err)
{
  my_putstr("\033[1;31m");
  my_putstr("WARNNIG !\n");
  tab_errors(err);
  my_putstr("\033[0;0m");
  return (err);
}

char	*c_errors(int err)
{
  my_putstr("\033[1;31m");
  my_putstr("WARNNIG !\n");
  tab_errors(err);
  my_putstr("\033[0;0m");
  return (NULL);
}
