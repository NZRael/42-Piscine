/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:32:28 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/16 18:47:42 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <unistd.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	tri;
	int	i;
	int	temp;

	i = 0;
	tri = 0;
	while (tri == 0)
	{
		tri = 1;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tri = 0;
				temp = tab [i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				i = 0;
			}
			else
				i++;
		}
	}
}

/*int	main(void)
{
	int	tab[6] = {5, 47, 32, 21, 49, 1};
	int	size;
	int	i;

	i = 0;
	size = 6;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf(" %d,", tab[i]);
		i++;
	}	
}*/
