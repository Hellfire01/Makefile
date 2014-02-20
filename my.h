/*
** my.h for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Feb  5 15:47:38 2014 a
** Last update Thu Feb 20 18:37:45 2014 matthieu raynaud de fitte
*/

#ifndef MY_H_
# define MY_H_

int     my_put_doublechar(char **str);
int     my_free_doublechar(char **str);
char    *my_strdup(char *str);
void    my_putchar(char c);
void    my_putnbr(int nb);
void	my_swap(int *a, int *b);
void	my_putstr(char *str);
int     my_strlen(char *str);
int     my_strcmp(char *s1, char *s2);
int     my_put_nbr_base(int nbr, char *base);
/* my_isin.c */
int     my_isin(char c, char *str);
int     my_isin2(char *str, char c);
int     my_isin3(char *str, int posision, char caracter);
/* my_getnbr_base.c */
int     neg(char *str, char *base, int basemax);
int     number(char c, char *base);
int     my_getnbr_base(char *str, char *base);
int	verif2(char *str, char *base);
/* my_getnbr.c */
int     neg2(char *str);
int     number2(char c);
int     my_getnbr(char *str);
int     verif(char *str);


/* fonctions maths */

int	car(int a);
int     expose(int nbr, int exposant);
int     expose2(int nbr, int exposant);
int     tab_produit(int *tab, int lignes);


/* fonctions get_next_line */

char *my_realloc(char *old, int size);
char *get_next_line(const int fd);

#endif /* !MY_H_ */
