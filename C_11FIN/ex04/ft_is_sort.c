/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 18:15:25 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/04 14:46:22 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	cmp(int a, int b)
{
	return (a - b);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	croi;
	int	decroi;

	i = 0;
	croi = 0;
	decroi = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			croi++;
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab [i + 1]) < 0)
			decroi++;
		i++;
	}
	if (!croi || !decroi)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};

	printf("%d\n", ft_is_sort(tab, 5, cmp));
}*/
