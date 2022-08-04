/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 20:36:52 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/15 20:00:34 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	count(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putchar('0' + nb / 10);
		ft_putchar('0' + nb % 10);
	}
}

void	ft_twodigit(int nb)
{
	if (nb < 10)
	{
		ft_putchar('0');
	}
	count(nb);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 99)
	{
		while (b <= 99)
		{
			ft_twodigit(a);
			ft_putchar(' ');
			ft_twodigit(b);
			if (a != 98)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
