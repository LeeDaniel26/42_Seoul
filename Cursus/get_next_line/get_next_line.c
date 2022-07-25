/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:29:27 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/20 15:47:42 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char 		buff[BUFFER_SIZE];
	char 		*line;
	static char *backup;
	int			i;

	i = 0;
	while (backup[i])
	{
		if (backup[i] == '\n')
		{

		}
	}
	ft_strcat(backup, )
	read(fd, buff, BUFFER_SIZE);
	
	i = 0;
	while (i < BUFFER_SIZE)
	{
		read(fd, buff+i, 1);
		if (buff[i] == 0)
			return buff;
		if (buff[i] == '\n')
			return buff;
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd;

	fd = open("main.txt", O_RDONLY);
	for(int i=0; i<2; i++)
	{
		printf("%s", get_next_line(fd));
		printf("...\n");
	}
}

