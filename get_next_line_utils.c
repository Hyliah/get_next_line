/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:33:39 by hlichten          #+#    #+#             */
/*   Updated: 2024/12/04 21:38:54 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int	ft_strlen(const char *str)
// {
// 	int	i;

// 	if (!str)
// 		return (0); // au cas ou la string est vide pour ne pas segfault
// 	i = 0;
// 	while (str[i]) // verifier comment gerer le \n
// 		i++;
// 	return (i);
// }

int	ft_strlen(const char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlen_until_newline(const char *s)
{
	size_t len = 0;

	if (!s)
		return (0);
	while (s[len] && s[len] != '\n')
		len++;
	if (s[len] == '\n')
		len++; // Inclure le '\n' dans la longueur
	return (len);
}

char    *ft_strdupjoin(char *s1, char *s2)
{
    char    *str;
    int     i;
    int     j;

    i = 0;
    j = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
    if (!str)
        return (NULL);
    while (s1 && s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    if (s1)
        free(s1);
    while (s2[j] && s2[j] != '\n')
        str[i++] = s2[j++];
    if (s2[j] == '\n')
        str[i++] = '\n';
    str[i] = '\0';
    return (str);
}



// char	*ft_strdupjoin(char *s1, char *s2)
// {
//     char    *str;
//     int     i;
//     int     j;

//     i = 0;
//     j = 0;
//     str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
//     if (!str)
//         return (NULL);
//     while (s1 && s1[i])
//     {
//         str[i] = s1[i];
//         i++;
//     }
//     if (s1)
//         free(s1);
//     while (s2[j] && s2[j] != '\n')
//         str[i++] = s2[j++];
//     if (s2[j] == '\n')
//         str[i++] = '\n';
//     str[i] = '\0';
//     return (str);
// }

// {
// 	char	*str;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	str = (char *)malloc(sizeof(char) * (ft_strlen((char *)(s1))
// 				+ ft_strlen((char *)(s2)) + 1));
// 	if (!str)
// 		return (NULL);
// 	while (s1 && s1[i])
// 	{
// 		str[i] = s1[i];
// 		i++;
// 	}
// 	if (s1)
// 		free(s1);
// 	while (s2[j] && s2[j] != '\n')
// 		str[i++] = s2[j++];
// 	if (s2[j] == '\n')
// 		str[i] = '\n'; 
// 	str[++i] = '\0';
// 	return (str);
// }

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

void	ft_strcpy(char *dest, char *src)
{
	if (!dest)
		return ;
	while (src && *src)
		*(dest++) = *(src++);
	*dest = '\0';
}

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *c;
    
    c = (unsigned char*)s;
    while (n-- > 0)
        *(c++) = 0;
}

