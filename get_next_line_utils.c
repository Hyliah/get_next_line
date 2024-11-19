/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:39 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/19 20:38:11 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_gnl(const char *str)
{
	int	i;

	if (!str)
		return (0); // au cas ou la string est vide pour ne pas segfault
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strdupjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof (char) * (ft_strlen_gnl((char *)(s1))
				+ ft_strlen_gnl((char *)(s2)) + 1));
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	if (s1)
		free(s1); // free pcq on a utilise le s1 et son contenu est dans str
	while (s2[j] && s2[i] != '\n')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;

	c1 = (unsigned char)c;
	while (*s)
	{
		if (*s == c1)
			return ((char *)s);
		s++;
	}
	if (c1 == '\0')
		return ((char *)s);
	return (NULL);
}