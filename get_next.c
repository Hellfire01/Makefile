/*
** get_next.c for get_next_line in /home/raynau_a
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Sun Dec 29 17:15:24 2013 a
** Last update Sun Dec 29 18:51:41 2013 a
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next.h"

char    *my_realloc(char *str, int i)
{
  char  *out;
  int   b;

  b = 0;
  out = malloc(i + sizeof(char *));
  if (out == NULL)
    return (0);
  while (i >= 0)
    {
      out[b] = str[b];
      i--;
      b++;;
    }
  free(str);
  return (out);
}

char    buffer_filler(int *ret, int fd, char *buffer, int *i)
{
  if (*ret == 0)
    {
      *i = 0;
      *ret = read(fd, buffer, BUFF);
    }
  return (*buffer);
}

char            *get_next_line(const int fd)
{
  char          *out;
  static char   buffer[BUFF];
  static int    i;
  int           j;
  static int    ret;

  j = 0;
  if (buffer[i++] == 10)
    ret--;
  *buffer = buffer_filler(&ret, fd, buffer, &i);
  if (ret <= 0)
    return (NULL);
  out = malloc(sizeof(char *));
  if (out == NULL)
    return (0);
  while (buffer[i] != 0 && buffer[i] != 10 && ret-- != 0)
    {
      out[j++] = buffer[i++];
      out = my_realloc(out, j);
      if (out == NULL)
        return (0);
      *buffer = buffer_filler(&ret, fd, buffer, &i);
    }
  out[j] = 0;
  return (out);
}
