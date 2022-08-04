/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dico.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:39:24 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/31 19:45:29 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	check_dic(void)
{
	int		red;
	int		op;
	char	buffer[2048];

	op = open("numbers.dict", O_RDONLY);
	if (op == -1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	red = read(op, buffer, 2048);
	close(op);
	return (1);
}

void	new_line(int *nb, int *i)
{
	char	buffer;
	int		a;

	a = 0;
	while (a)
	{
		a = read(*nb, &buffer, 1);
		if (a == '\n')
			break ;
	}
	*i = 0;
}

char	*parsing_dic(char	*str)
{
	int		i;
	int		x;
	char	c;
	char	*rd;

	if (!check_dic())
		return ("Dict Error\n");
	i = 0;
	x = open("numbers.dict", O_RDONLY);
	while (read(x, &c, 1))
	{
		if (str[i] != c && str[i] != '\0')
		{
			new_line(&x, &i);
			continue ;
		}
		if ((c == ':' || c == ' ') && str[i] == '\0')
			rd = "";
		if (str[i] == '\0')
		{
			new_line(&x, &i);
			continue ;
		}
		i++;
	}
	return (rd);
}
/*l. 20 : fonction qui prend le mot dans le dictionnaire(x, i, c);*/
/*
int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	if (check_dic())
	{
		printf("oui\n");
		return (0);
	}
	return (0);
}*/
