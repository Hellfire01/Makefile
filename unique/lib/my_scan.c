/*
** my_scan.c for header in /home/mat/epitech/Makefile/unique/lib
** 
** Made by mat
** Login   <mat@epitech.net>
** 
** Started on  Mon Aug  4 16:52:58 2014 mat
** Last update Sat Aug  9 16:44:10 2014 mat
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

/*
** int size vient déterminer la taille qui doit être read par la fonction
** my_scan_num() est relancée tant qu'un caractère autre qu'un nombre est
**    détecté dans la chaine.
*/

int	my_nscan(char *message, int size)
{
  int	i;
  int	again;
  int	out;
  char	*tmp;

  again = 0;
  while (again == 0)
    {
      again = 1;
      tmp = my_scan(message, size);
      i = 0;
      while (tmp[i] != '\0' && tmp[i] != '\n')
	{
	  if (tmp[i] < 48 || tmp[i] > 57)
	    {
	      again = 0;
	      free(tmp);
	      break ;
	    }
	  i += 1;
	}
    }
  out = my_getnbr(tmp);
  free(tmp);
  return (out);
}

char	*my_scan(char *message, int size)
{
  char	*out;

  if ((out = malloc((size + 1) * sizeof(char))) == NULL)
    return (c_errors(1));
  str_init(out, size + 1);
  my_putstr(message);
  if (read(0, out, size) <= 0)
    return (c_errors(0));
  return (out);
}
