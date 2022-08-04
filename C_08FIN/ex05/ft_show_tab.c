/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:28:26 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/01 18:26:52 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	pstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	wrt(char c)
{
	write(1, &c, 1);
}

void	nbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		wrt('-');
		nbr(-nb);
	}
	else if (nb > 9)
	{
		nbr(nb / 10);
		nbr(nb % 10);
	}
	else
		wrt(nb + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		pstr(par[i].str);
		wrt('\n');
		nbr(par[i].size);
		wrt('\n');
		pstr(par[i].copy);
		wrt('\n');
		i++;
	}
}
/*
int	main(int ac, char **av)
{
	struct s_stock_str *tab = ft_strs_to_tab(ac, av);
	ft_show_tab(tab);
}*/
