/*
** my_isin.c for isin in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Thu Nov 14 14:57:49 2013 a
** Last update Sat Aug  9 01:18:41 2014 mat
*/

#include "my.h"

int	my_isin(char c, char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      if(str[i] == c)
	return (1);
      i = i + 1;
    }
  return (0);
}

/*
** my_isin2 renvoie la position du caractère dans la chaine qui lui
**    a été passé en argument et retourne ( -1 ) s'il se trouve que le
**    caractère n'est pas dans la chaîne.
*/


int     my_isin2(char c, char *str)
{
  int   i;

  i = 0;
  while (str[i])
    {
      if (str[i] == c)
        return (i);
      i = i + 1;
    }
  return (-1);
}

/*
** my_isin3 revoie la position du n-ième caractère demandé dans la chaine
**    et -1 en cas d'erreur.
*/

int     my_isin3(char caracter, char *str, int posision)
{
  int   i;
  int   temp;

  i = 0;
  temp = 0;
  while (temp < posision && str[i] != '\0')
    {
      if (str[i] == caracter)
        temp = temp + 1;
      i = i + 1;
    }
  if (str[i] == '\0')
    return (-1);
  return (i);
}
