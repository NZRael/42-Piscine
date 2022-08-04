/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:21:47 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/17 15:54:24 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char	s[] = "abdPo";

	printf("%d\n", ft_str_is_alpha(s));
}*/
