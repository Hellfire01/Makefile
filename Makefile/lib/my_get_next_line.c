/*
** my_get_next_line.c for header in /home/mat/epitech/Makefile/unique/lib
** 
** Made by mat
** Login   <mat@epitech.net>
** 
** Started on  Wed Jul 30 17:25:33 2014 mat
** Last update Tue Aug 19 18:42:43 2014 mat
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"
# define BUFF 10

char	*get_line(char *out, int nb, const int fd)
{
  int	i;
  int	b;
  int	size;
  char	*tmp;

  tmp = out;
  // le bug est ici ==> quand out est free() : tmp l'est aussi car ils pointent sur le même string
  free(out);
  size = (nb + 1) * BUFF;
  if ((out = malloc(size * sizeof(char))) == NULL)
    return (c_errors(1));
  str_init(out, size);
  i = 0;
  while (i < size - BUFF)
    {
      // du coup ça plante ici
      out[i] = tmp[i];
      i += 1;
    }
  str_init(tmp, size - BUFF);
  if (read(fd, tmp, BUFF) <= 0)
    return (c_errors(0));
  b = 0;
  while (b < BUFF)
    out[i++] = tmp[b++];
  free(tmp);
  return (out);
}

int	find_end(char *str, int nb)
{
  int	i;

  i = 0;
  while (i < BUFF * nb)
    if (str[i++] == '\0')
      return (0);
  return (1);
}

char	*get_next_line(const int fd)
{
  char	*out;
  int	nb;

  nb = 1;
  if ((out = malloc(BUFF * sizeof(char))) == NULL)
    return (c_errors(1));
  str_init(out, BUFF);
  if (read(fd, out, BUFF) <= 0)
    return (c_errors(0));
  while(find_end(out, nb) == 1)
    {
      out = get_line(out, nb++, fd);
      if (out == NULL)
	break ;
    }
  return (out);
}
