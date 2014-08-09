/*
** l_init.c for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by matthieu raynaud de fitte
** Login   <raynau_a@epitech.net>
** 
** Started on  Sat Feb 22 18:10:15 2014 matthieu raynaud de fitte
** Last update Wed Jul 30 16:25:48 2014 mat
*/

/*
** cette fonction se charge de mettre toute la longueure ( ou celle
**    souhaitée ) de str sur '\0'
** attention à ne pas lui envoyer un taille trop grande pour éviter le Segfault
*/

void    str_init(char *l, int taille)
{
  int   i;

  i = 0;
  while (i < taille)
    {
      l[i] = '\0';
      i = i + 1;
    }
}
