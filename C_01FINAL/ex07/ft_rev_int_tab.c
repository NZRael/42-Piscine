/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:33:40 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/16 18:47:09 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size-1-i];
		tab[size-1-i] = temp;
		i++;
	}
}

// int	main()
// {
// 	int tab[3] = {1, 2, 3};
// 	int	size;
// 	int	i;

// 	i = 0;
// 	size = 3;
// 	ft_rev_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }