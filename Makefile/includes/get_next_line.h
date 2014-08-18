/*
** get_next_line.h for header in /home/mat/epitech/Makefile/Makefile/includes
** 
** Made by mat
** Login   <mat@epitech.net>
** 
** Started on  Thu Aug 14 21:53:43 2014 mat
** Last update Thu Aug 14 21:56:40 2014 mat
*/

/*
** fonctions du get_next_line();
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

char	*get_line(char *out, int nb, const int fd);
int	find_end(char *str, int nb);
char	*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_H_ */
