/*
** my.h for header in /home/raynau_a/rendu/GETNEXT-MAKEFILE-LIB/my_lib
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Wed Feb  5 15:47:38 2014 a
** Last update Sat Aug  9 01:19:15 2014 mat
*/

#ifndef MY_H_
# define MY_H_

/*
** fonctions de base de la lib
*/
void	my_free_tab(char **str);
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
void	str_init(char *l, int taille);

/*
** my_put_tab.c
*/
void	my_put_tab(char **tab);
void	my_put_tab2(char **tab);

/*
** my_isin.c
*/
int	my_isin(char c, char *str);
int	my_isin2(char c, char *str);
int	my_isin3(char caracter, char *str, int posision);

/*
** my_getnbr_base.c
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
** fonctions get_next_line
*/

/*
** errors.c
*/
void	tab_errors(int err);
int	errors(int err);
char	*c_errors(int err);

/*
** my_scan.c
*/
char	*my_scan(char *message, int size);
int	my_nscan(char *message, int size);

#endif /* !MY_H_ */
