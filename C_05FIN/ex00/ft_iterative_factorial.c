/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:23:21 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/24 09:25:04 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(-30));
}*/
