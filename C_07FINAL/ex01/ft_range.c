/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 13:55:41 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/02 09:38:02 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (min >= max)
		return (NULL);
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*
int	main()
{
	int		i;
	int	*tab;

	i = 0;
	tab = ft_range(5, 11);
	while (i < 6)
	{
		printf("[%d]", tab[i]);
		i++;
	}
}*/
