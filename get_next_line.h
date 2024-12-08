/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:43 by hlichten          #+#    #+#             */
/*   Updated: 2024/12/04 21:35:33 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

// a supprimer pour les tests
#include <stdio.h> 
#include <stdio.h>
#include <fcntl.h>

int main (int argc, char **argv);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif 

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdupjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strcpy(char *dest, char *src);
int		ft_strlen(const char *str);
void    ft_bzero(void *s, size_t n);
int		ft_strlen(const char *str);
char	*get_next_line(int fd);
size_t	ft_strlen_until_newline(const char *s);

void	*ft_memmove(void *dest, const void *src, size_t n);

#endif