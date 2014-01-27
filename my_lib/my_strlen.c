/*
** my_strlen.c for my_strlen in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:38:12 2013 a
** Last update Thu Oct 10 15:50:31 2013 a
*/

int	my_strlen(char *str)
{
  int	counter;

  counter = 0;
  while (str[counter] != '\0')
    counter = counter + 1;
  return (counter);
}
