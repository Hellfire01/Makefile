/*
** my_swap.c for header in /home/raynau_a/rendu/Piscine-rattrapage-Jour_02AM/ex_01
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Tue Dec 17 09:40:21 2013 a
** Last update Tue Dec 17 11:59:59 2013 a
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = 0;
  c = *a;
  *a = *b;
  *b = c;
}
