/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:21:57 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/19 20:38:09 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*compile (char *buff, char *rest)
{
	static char *final;

	ft_strjoin(*buff, *rest)
	final = (char *)malloc(sizeof(char) * (BUFFER_SIZE));

	return (final);
}

??	read_line()
{
	static char *rest;
	static char *final;

	while (!ft_strchr(*rest, '\n'))
		{
			final = compile(buff, rest);
		}
	return (final);
}
??	next_line(char *)
{

}

void	ft_strcpy(char *dest, char *src)
{
	while (src && *src)
		*(dest++) = *(src++);
	*dest = '\0';
}

char	*get_next_line(int fd)
{
	static char buff[BUFFER_SIZE + 1] = {0}; // la taille du reste de depassera jamais la taille du buffer - 1 (\n) donc on connait deja la taille
	char		*ret; // ligne jusqu au \n + ce qui a deja ete lu 
	int			rd;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ret = NULL;

	// if reste quelque chose dans le buff if (*buff)
	// 	ret = buff
	while (1)
	{
	rd = read(fd, buff, BUFFER_SIZE);
	buff[rd] = '\0';
	if (read <= 0 || ft_strchr(ret, '\n'))
	{
		ft_strcpy(ft_strchr(ret, '\n') + 1); //??
		if (read > 0)
			a5;
		b5;
	}
}

read retourne le nomvre de caracteres lu

char *ret;

read dans buff

1. recuperer rest de buff si rest
2. read le buffer (again and again)
3. ajouter buffer jausqua u \n si y a (again and again)
4. verifier si fin
a5. recuperer le reste dans buff
b5. return ret

faire attention a l ordre
ret = ret + buff - rest OK

si ligne complete (on a trouve un \n ou fin du fichier) :
recuperer dans un tmp la fin  
return ret;

ret = ft_strjoin(ret, buff);

static char *rest;

//     ssize_t	read(int fildes, void *buf, size_t nbyte);  ---> ssize_t range de -1 a max size_t