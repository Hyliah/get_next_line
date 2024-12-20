/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:43 by hlichten          #+#    #+#             */
/*   Updated: 2024/12/20 23:31:43 by hlichten         ###   ########.fr       */
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

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 34
# endif 

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdupjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strcpy(char *dest, char *src);
int		ft_strlen(const char *str);
void    ft_bzero(void *s, size_t n);
int		ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*ft_free(char **line);

#endif