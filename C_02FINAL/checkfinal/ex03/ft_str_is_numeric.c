/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 15:35:16 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/17 16:34:02 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
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
		if (str[i] >= 48 && str[i] <= 57)
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

	printf("%d\n", ft_str_is_numeric(s));
}*/
