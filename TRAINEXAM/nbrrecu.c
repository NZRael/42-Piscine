/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrrecu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:17:53 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/29 12:28:32 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nb)
{
	if (nb == -2147483648)
	{
		pchar('-');
		putnbr(2);
		putnbr(147483648);
	}
	else if (nb < 0)
	{
		pchar('-');
		putnbr(-nb);
	}
	else if (nb > 9)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
		pchar(nb + '0');
}

int	main()
{
	putnbr(2147483647);
}
