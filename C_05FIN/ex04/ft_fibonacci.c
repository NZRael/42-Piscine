/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:41:21 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/20 19:08:28 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (-1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_fibonacci(-5));
}*/
