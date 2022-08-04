/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 19:15:27 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/28 09:00:52 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (i * i <= nb && i < 46341)
	{
		x = i * i;
		if (x == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(2147395600));
}*//*
Test d'une SQRT pour tout les nombres :
int	ft_sqrt(int nb)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (i++ < nb / 2)
	{
		x = nb / i;
		if (x == i)
			return (x);
	}
	return (0);
}*/
