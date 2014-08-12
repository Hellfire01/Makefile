/*
** epure.h for header in /home/mat/epitech/Makefile/unique/includes
** 
** Made by mat
** Login   <mat@epitech.net>
** 
** Started on  Mon Aug 11 22:30:57 2014 mat
** Last update Mon Aug 11 22:34:14 2014 mat
*/

/*
** fonctions du fichier correct.c dans la lib
** note : les String envoyés doivent IMPERATIVEMENT avoir été mallocs sinon
**    c'est un Segfault pour permition non acordée assuré
*/

#ifndef EPURE_H_
# define EPURE_H_

void	erase_exess(char *str);
void	eliminate_all_tabs(char *str);
int	no_useless_spaces(char *str);
void	eliminate_first_space(char *str);
void	eliminate_last_space(char *str);

#endif /* !HEADER_H_ */
