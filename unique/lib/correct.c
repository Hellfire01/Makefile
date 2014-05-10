/*
** correct.c for header in /home/mat/epitech/lem-in
** 
** Made by mat
** Login   <mat@epitech.net>
** 
** Started on  Sun Apr 27 21:27:29 2014 mat
** Last update Sat May 10 16:32:10 2014 mat
*/

/*
** fonction de nétoyage du char* ( elle appelle toutes les autres fontions )
*/

void    erase_exess(char *str)
{
  int	ret;

  ret = 1;
  eliminate_all_tabs(&str);
  while (ret == 1)
    ret = no_useless_spaces(&str);
  eliminate_first_space(&str)
  eliminate_last_space(&str);
}

/*
** élimination d'un éventuel espace en début de ligne, s'utilise
**    après no_useless_spaces()
*/

void    eliminate_first_space(char **str)
{
  int   i;

  i = 0;
  if ((*str)[0] == ' ')
    while ((*str)[i] != '\0')
      {
        (*str)[i] = (*str)[i + 1];
        i = i + 1;
      }
}

/*
** élimination d'un éventuel espace en fin de ligne, s'utilise
**    après no_useless_spaces()
*/

void    eliminate_last_space(char **str)
{
  int   i;

  i = 0;
  while ((*str)[i] != '\0')
    i = i + 1;
  if (i > 0)
    if ((*str)[i - 1] == ' ')
      (*str)[i] = '\0';
}

/*
** transforme les tabulations en espaces
*/

void    eliminate_all_tabs(char **str)
{
  int   i;

  i = 0;
  while ((*str)[i] != '\0')
    {
      if ((*str)[i] == '\t')
        (*str)[i] = ' ';
      i = i + 1;
    }
}

/*
** élimination des doublons d'espaces
*/

int     no_useless_spaces(char **str)
{
  int   i;

  i = 0;
  eliminate_first_space(str);
  while ((*str)[i] != '\0')
    {
      if ((*str)[i] == ' ' && (*str)[i + 1] == ' ')
        {
          while ((*str)[i] != '\0')
            {
              (*str)[i] = (*str)[i + 1];
              i = i + 1;
            }
          return (1);
        }
      i = i + 1;
    }
  return (0);
}

