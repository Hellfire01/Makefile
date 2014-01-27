/*
** get_next.h for header in /home/raynau_a/rendu/PSU_2013_minishell1
** 
** Made by a
** Login   <raynau_a@epitech.net>
** 
** Started on  Sun Dec 29 18:26:06 2013 a
** Last update Sun Dec 29 18:34:35 2013 a
*/

#ifndef GET_NEXT_H_
# define GET_NEXT_H_

# define BUFF 2000

char    *my_realloc(char *str, int i);
char	buffer_filler(int *ret, int fd, char *buffer, int *i);
char    *get_next_line(const int fd);

#endif /* !GET_NEXT_H_ */
