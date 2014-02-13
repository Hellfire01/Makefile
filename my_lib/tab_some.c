/*
** tab_somme.c for header in /home/raynau_a/rendu/Allum1/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Thu Feb 13 20:48:54 2014 a
** Last update Thu Feb 13 20:58:51 2014 a
*/

/*
** Cette fonction vise à renvoyer la somme du contenu d'un tableau d'int
*/

int	tab_produit(int *tab, int lignes)
{
  int	i;
  int	out;

  i = 0;
  out = 0;
  while (i < lignes)
    {
      out = out + tab[i];
      i = i + 1;
    }
  return (out);
}
