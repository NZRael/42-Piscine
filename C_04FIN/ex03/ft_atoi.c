/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 21:31:55 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/26 20:51:23 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	positiv(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			x++;
		i++;
	}
	if (x % 2 == 0)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || str[i] == '\t'
		|| str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (!positiv(&str[i]))
		sign = -1;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (sign * nb);
}
#include <stdio.h>
int	main()
{
	char	s1[] = "    \n \v-+--\n---+-+143a256";

	printf("%d", ft_atoi(s1));	
}
