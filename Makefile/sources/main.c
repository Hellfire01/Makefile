/*
** main.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Mon Feb  3 12:30:21 2014 a
** Last update Thu Aug 14 22:10:11 2014 mat
*/

#include <stdlib.h>
#include "header.h"

int	main()
{
  char	*tmp;

  while (42)
    {
      tmp = get_next_line(0);
      c_str(tmp, 'y');
      free(tmp);
    }
  return (0);
}
