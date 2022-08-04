/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:42:42 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/17 16:52:39 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 32 && str[i] <= 126)
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
	char	s[] = "123168b vhbhe vjHJUhg nb  677Y&*Y*#^gb\n";

	printf("%d\n", ft_str_is_printable(s));
}*/
