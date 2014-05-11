/*
** my.h for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Feb  5 15:47:38 2014 a
** Last update Sun May 11 17:54:35 2014 mat
*/

#ifndef MY_H_
# define MY_H_

/*
** fonctions de base de la lib
*/
void	my_put_doublechar(char **str);
void	my_put_doublechar2(char **str);
int	my_free_doublechar(char **str);
void	my_tab_put(int *tab, int size);
char	*my_strdup(char *str);
void	my_putchar(char c);
void	my_putnbr(int nb);
void	my_swap(int *a, int *b);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_strcmp(char *s1, char *s2);
char	*my_strcat(char *stra, char *strb);
int	my_put_nbr_base(int nbr, char *base);
void	l_init(char *l, int taille);

/*
** my_isin.c
*/
int	my_isin(char c, char *str);
int	my_isin2(char *str, char c);
int	my_isin3(char *str, int posision, char caracter);

/*
**my_getnbr_base.c
**/
int	neg(char *str, char *base, int basemax);
int	number(char c, char *base);
int	my_getnbr_base(char *str, char *base);
int	verif2(char *str, char *base);

/*
** my_getnbr.c
*/
int	neg2(char *str);
int	number2(char c);
int	my_getnbr(char *str);
int	verif(char *str);

/*
** color_str.c
*/
void	c_str(char *str, char color);
void	my_color(char c);
void	strp(char *str);

/*
** correct.c
*/
void	erase_exess(char *str);
void	eliminate_all_tabs(char **str);
int	no_useless_spaces(char **str);
void	eliminate_first_space(char **str);
void	eliminate_last_space(char **str);


/*
**fonctions maths
*/
int	car(int a);
int	expose(int nbr, int exposant);
int	expose2(int nbr, int exposant);
int	tab_produit(int *tab, int lignes);


/*
** fonctions get_next_line
*/
char	*my_realloc(char *old, int size);
char	*get_next_line(const int fd);

#endif /* !MY_H_ */
