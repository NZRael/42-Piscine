/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:55:49 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/28 16:39:51 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		nb *= i;
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_power(-4, -3));
}*/
