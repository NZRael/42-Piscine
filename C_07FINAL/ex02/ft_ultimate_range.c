/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:47:58 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/02 16:43:15 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	i = 0;
	size = max - min;
	tab = malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (-1);
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}
/*
int	main(void)
{
	int *range;
	int	i;
	int	tab[2] = {1, 2};

	i = 0;
	ft_ultimate_range(tab, 1, 3);
	while (i < 2)
	{
		printf("[%d]", tab[i]);
		i++;
	}
	printf("5 : %d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0],
	 range[1], range[2], range[3], range[4]);

	printf("0 : %d\n", ft_ultimate_range(&range, 3, 3));

	printf("2 : %d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
}*/
