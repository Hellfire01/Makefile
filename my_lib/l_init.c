/*
** l_init.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by matthieu raynaud de fitte
** Login   <raynau_a@epitech.net>
** 
** Started on  Sat Feb 22 18:10:15 2014 matthieu raynaud de fitte
** Last update Fri Feb 28 22:17:26 2014 matthieu raynaud de fitte
*/

/*
** cette fonction se charge de mettre toute la longueure ( ou celle
**    souhaitée ) de str sur '\0'
** attention à ne pas lui envoyer un taille trop grande pour éviter le Segfault
*/

void    l_init(char *l, int size)
{
  int   i;

  i = 0;
  while (i < size)
    {
      l[i] = '\0';
      i = i + 1;
    }
}
