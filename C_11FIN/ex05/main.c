/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do-op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:34:58 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/04 17:48:19 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 4)
		return (0);
	if ((argv[2][0] != '+' && argv[2][0] != '-'
		&& argv[2][0] != '/' && argv[2][0] != '%'
		&& argv[2][0] != '*') || argv[2][1] != '\0')
	{
		ft_putnbr(0);
		write(1, "\n", 1);
		return (0);
	}
	if (argv[2][0] == '+')
		ft_putnbr(addition(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '-')
		ft_putnbr(soustraction(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '*')
		ft_putnbr(multipl(ft_atoi(argv[1]), ft_atoi(argv[3])));
	if (argv[2][0] == '/')
		divise(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (argv[2][0] == '%')
		modulo(ft_atoi(argv[1]), ft_atoi(argv[3]));
	write(1, "\n", 1);
	return (0);
}
