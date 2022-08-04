/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:50:08 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/25 09:42:38 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	j;
	int	x;

	j = 0;
	x = 1;
	while (x < argc - 1)
	{
		j = x + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[x], argv[j]) > 0)
				ft_swap(&argv[x], &argv[j]);
			j++;
		}
		x++;
	}
	j = 0;
	while (j++ < argc - 1)
		ft_putstr(argv[j]);
	return (0);
}
