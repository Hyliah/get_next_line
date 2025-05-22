/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:43 by hlichten          #+#    #+#             */
/*   Updated: 2024/12/22 14:33:16 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int				ft_strlen(const char *str);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
char			*get_next_line(int fd);
char			*ft_strchr(const char *s, int c);
char			*ft_strjoin(char *s1, char *s2);
char			*ft_free(char **line);
int				join_and_check(char **line, char *to_join);
int				pdate_and_check(char *buffer, char **line);
int				is_eof(int rd, char *buffer, char **line);

#endif