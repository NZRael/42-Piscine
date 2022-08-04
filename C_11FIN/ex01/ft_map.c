/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 17:26:53 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/03 17:34:24 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*dest;
	int	i;

	i = 0;
	dest = malloc(sizeof(int) * length);
	while (i < length)
	{
		dest[i] = f(tab[i]);
		i++;
	}
	return (dest);
}
