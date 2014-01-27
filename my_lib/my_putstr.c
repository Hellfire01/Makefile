/*
** my_putstr.c for my_putstr in /home/raynau_a/rendu/Piscine-C-lib/my
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Oct  9 15:36:38 2013 a
** Last update Sat Jan 25 00:57:26 2014 a
*/

int	my_putstr(char *src)
{
  int	counter;

  counter = 0;
  while (src[counter] != '\0')
    my_putchar(src[counter++]);
}
