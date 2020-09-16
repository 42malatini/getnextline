/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <mahaut.latinis@essca.eu>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 21:26:03 by malatini          #+#    #+#             */
/*   Updated: 2020/09/16 22:08:53 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
int	get_next_line(int fd, char **line)
{
	return (fd);
}
*/

//fgets lit une ligne, renvoie null et pas eof
//voir fonctions de positionnement
//ftell, fseek,

int	main(void)
{
	//Ouverture d'un fichier et déclaration du pointeur "vers un flux"
	FILE *fd = fopen("test.txt", "r");

	if (fd == NULL)
		exit (1);
	//feof - tester si la fin du fichier (pour tout lire)
	char c = 0;
	while ((c = fgetc(fd)) != EOF)
	{
		printf("%c\n", c);
	}
	//Fermeture du fichier
	fclose(fd);
	return (0);
}
