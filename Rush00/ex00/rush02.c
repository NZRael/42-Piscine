/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:35:26 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/17 10:43:27 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	prem(int x, char first, char last)
{
	int	a;

	a = x - 2;
	ft_putchar(first);
	while (a != 0)
	{
		ft_putchar('*');
		a--;
	}
	ft_putchar(last);
	ft_putchar('\n');
}

void	bal(int x, int y)
{
	int	b;
	int	a;

	b = y - 2;
	while (b != 0)
	{
		ft_putchar('*');
		a = x - 2;
		while (a != 0)
		{
			ft_putchar('*');
			a--;
		}
		ft_putchar('*');
		ft_putchar('\n');
		b--;
	}
}

void	cat(int y, char first, char last)
{
	int	b;

	b = y - 2;
	ft_putchar(first);
	ft_putchar('\n');
	while (b != 0)
	{
		ft_putchar('*');
		ft_putchar('\n');
		b--;
	}
	ft_putchar(last);
	ft_putchar('\n');
}

void	rush02(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (x >= 2)
		{
			prem(x, '/', '\\');
			if (y >= 2)
			{
				bal(x, y);
				prem(x, '/', '\\');
			}
		}
		else
		{
			if (y == 1)
			{
				ft_putchar('/');
				ft_putchar('\n');
			}
			else
				cat(y, '/', '\\');
		}
	}
}
