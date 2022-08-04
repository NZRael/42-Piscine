/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 13:28:03 by fleriche          #+#    #+#             */
/*   Updated: 2022/08/04 09:54:03 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

char error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int verif(int ac/*, char *str*/)
{
	if (ac != 2)
	{
		error();
		return (0);
	}/*
	if (ft_strlen(str) != 4)
	{
		error();
		return(0);
	}*/
	return (1);
}

int main(int ac, char **av)
{
	char *str;
	int fd;
	char buf[150];
	char msg[150];

	str = av[1];
	if (!verif(ac/*, str*/))
		return (0);
	fd = open("map.txt", O_RDWR);
	if (fd != -1)
	{
		read(fd, buf, sizeof(msg));
		printf("%s", buf);
		close(fd);
	}
	return (0);
}
