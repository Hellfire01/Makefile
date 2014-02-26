/*
** my_strcat.c for header in /home/raynau_a/rendu/PSU_2013_minishell1/my_lib
** 
** Made by matthieu raynaud de fitte
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Feb 26 18:10:31 2014 matthieu raynaud de fitte
** Last update Wed Feb 26 18:42:38 2014 matthieu raynaud de fitte
*/

#include "my.h"
#include <stdlib.h>

char	*my_strcat(char *stra, char *strb)
{
  char	*out;
  int	i;
  int	a;

  i = 0;
  a = 0;
  if ((out = malloc((my_strlen(stra) + my_strlen(strb) + 1) *
		    sizeof(char))) == NULL)
    return (NULL);
  while (stra[i] != '\0')
    {
      out[i] = stra[i];
      i = i + 1;
    }
  while (strb[a] != '\0')
    out[i++] = strb[a++];
  out[i + 1] = '\0';
  return (out);
}
