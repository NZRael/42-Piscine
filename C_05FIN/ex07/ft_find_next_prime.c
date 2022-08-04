/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:56:06 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/26 18:52:14 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0 || nb == 1 || nb == 0)
		return (2);
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(2147483642));
	printf("%d\n", ft_find_next_prime(-498));
}*/
