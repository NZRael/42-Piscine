/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:37:30 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/17 16:53:14 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	if (str[i] == '\0')
	{
		return (x);
	}
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			x = 1;
		}
		else
		{
			x = 0;
			return (x);
		}
		i++;
	}
	return (x);
}

/*int	main(void)
{
	char	s[] = "OIEIH";

	printf("%d\n", ft_str_is_uppercase(s));
}*/
