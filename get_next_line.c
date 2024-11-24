/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:21:57 by hlichten          #+#    #+#             */
/*   Updated: 2024/11/24 16:26:05 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char buff[BUFFER_SIZE + 1] = {0}; // la taille du reste de depassera jamais la taille du buffer - 1 (\n) donc on connait deja la taille
	char		*line; // ligne jusqu au \n + ce qui a deja ete lu 
	int			rd; // retour de read

	rd = 1;
	if (fd < 0 || BUFFER_SIZE <= 0) // fonction de verification si le fd est impossible ou si le buffer_size n est pas utilisable
		return (NULL);
	line = NULL;
	if (*buff) // si il reste qqc dans le buffer 
		ft_strcpy(line, buff); //on le transfert dans line (variable de retour
	while (1) // boucle infinie qui se termine une fois qu'il y a un retour. Si pas norminette on peut l ecrire : while ( rd = read(fd, buff, BUFFER_SIZE) > 0)
	{
		rd = read(fd, buff, BUFFER_SIZE); // donne le retour de read + execute la fonction read 
		buff[rd] = '\0'; // a la fin du buffer à BUFFER_SIZE +1 ou si le texte est plus petit, on rajoute un \0
		line = ft_strdupjoin(line, buff); // on met le contenu du buff dans line
		if (rd <= 0 || ft_strchr(line, '\n')) // si le retour de read est fini ou un code erreur || OU || que il y a un \n dans la line
		{
			if (ft_strchr(line, '\n'))
			{
				ft_strcpy(buff, ft_strchr(line, '\n') + 1); // mets strchr +1 au debut du buffer 
				return (line);
			}
			if (rd < 0)
				return (NULL);
			if (rd == 0)
				return (line);
		}
	}
	return (NULL);
}

int main (int argc, char **argv)
{
    int    fd = open(argv[1], O_RDONLY);
	char *line;

    printf("Mon filedescriptor: %d\n", fd);
	line = get_next_line(fd);
	printf("test gnl: %s\n", line);

    return 0;
}

// read lineourne le nomvre de caracteres lu

// char *line;

// read dans buff

// 1. recuperer rest de buff si rest
// 2. read le buffer (again and again)
// 3. ajouter buffer jausqua u \n si y a (again and again)
// 4. verifier si fin
// a5. recuperer le reste dans buff
// b5. return line

// faire attention a l ordre
// line = line + buff - rest //OK

// si ligne complete (on a trouve un \n ou fin du fichier) :
// recuperer dans un tmp la fin  
// lineurn line;


// line = ft_strjoin(line, buff);

// static char *rest;

// 0 si pas de \n, tout dans line
// 1 si \n, mettre premiere partie dans line
// 2 mettre \n +1 dans static buffer au debut et rappeler la suite
// 3 return  

//     ssize_t	read(int fildes, void *buf, size_t nbyte);  ---> ssize_t range de -1 a max size_t




// on check dans le buff si \n 
// si y a on copie jusquau \n + 1 dans le line
// 	supprime line du buff
// si y a pas on copie le buff entier dans line + boucle infinie



