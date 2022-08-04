/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revinttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:51:50 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/29 10:28:01 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;
	int		j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

int	main()
{
	int tab[3] = {1, 2, 3};
	int	size;
	int	i;

	i = 0;
	size = 3;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
}
