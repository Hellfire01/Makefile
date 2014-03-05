/*
** get_next.c for get_next_line in /home/raynau_a
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Sun Dec 29 17:15:24 2013 a
** Last update Wed Feb  5 15:46:07 2014 a
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
#define READ_MAX 2000

char *my_realloc(char *old, int size)
{
  int i;
  char *new;

  i = 0;
  if ((new = malloc(sizeof(*new) * (my_strlen(old) + size))) == NULL)
    return (NULL);
  while (old[i])
    {
      new[i] = old[i];
      i++;
    }
  free(old);
  return (new);
}

char *get_next_line(const int fd)
{
  static int last = 1;
  static int rd = 0;
  static int i = 0;
  static char *res = NULL;
  static char buf[READ_MAX];

  if (buf[my_strlen(buf) - rd] == '\0')
    {
      if ((rd = read(fd, buf, READ_MAX)) <= 0)
        return (res = (last-- && buf[my_strlen(buf) - rd - 1] != 10) ? res :\
                NULL);
      buf[rd] = '\0';
    }
  if ((res = (i == 0) ? malloc(sizeof(*res) * READ_MAX + 1) :
       my_realloc(res, sizeof(*res) * READ_MAX + 1)) == NULL)
    return (NULL);
  while (buf[my_strlen(buf) - rd] && buf[my_strlen(buf) - rd] != '\n')
    res[i++] = buf[my_strlen(buf) - rd--];
  res[i] = '\0';
  if (buf[my_strlen(buf) - rd] == '\n')
    {
      i = 0;
      rd--;
      return (res);
    }
  return (get_next_line(fd));
}