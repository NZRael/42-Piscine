/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:27:20 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/20 16:44:17 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(5));
}*/
