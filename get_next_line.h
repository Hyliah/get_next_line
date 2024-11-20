/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:43 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/20 19:17:34 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif 

char	*ft_strdupjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
void	ft_strcpy(char *dest, char *src);
int		ft_strlen_gnl(const char *str);
char	*get_next_line(int fd);

#endif