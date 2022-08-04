/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:42:24 by rchbouki          #+#    #+#             */
/*   Updated: 2022/07/16 11:45:50 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	a(int x)
{
	int	a;

	a = x - 2;
	while (a != 0)
	{
		ft_putchar('B');
		a--;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	b(int x, int y)
{
	int	b;
	int	a;

	b = y - 2;
	while (b != 0)
	{
		ft_putchar('B');
		a = x - 2;
		while (a != 0)
		{
			ft_putchar(' ');
			a--;
		}
		ft_putchar('B');
		ft_putchar('\n');
		b--;
	}
}

void	c(int y)
{
	int	b;

	b = y - 2;
	ft_putchar('\n');
	while (b != 0)
	{
		ft_putchar('B');
		ft_putchar('\n');
		b--;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		if (x >= 2)
		{
			a(x);
			if (y >= 2)
			{
				b(x, y);
				ft_putchar('A');
				a(x);
			}
		}
		else
		{
			ft_putchar('A');
		}
	}
}
