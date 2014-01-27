/*
** my_strcmp.c for my_strcmp in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 16:06:59 2013 a
** Last update Tue Oct 29 12:50:29 2013 a
*/

int	my_strcmp(char *s1, char *s2)
{
  int	counter;

  counter = 0;
  while (s1[counter] != '\0' && s2[counter] != '\0')
    {
      if (s1[counter] != s2[counter])
	return (s1[counter] - s2[counter]);
      counter = counter + 1;
    }
  return (s1[counter] | s2[counter]);
}
