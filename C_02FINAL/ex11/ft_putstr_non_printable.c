/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsr_non_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:41:50 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/18 16:57:40 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	int	x;

	if (c >= 32 && c <= 126)
		x = 1;
	else
		x = 0;
	return (x);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*tab;

	tab = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (!is_printable(str[i]))
		{
			write(1, "\\", 1);
			ft_putchar((str[i] / 16) + 48);
			ft_putchar(tab[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*int	main(void)
{
	char	s[] = "Coucou\nmerci pour le\tgout\ar";
	ft_putstr_non_printable(s);
}*/
