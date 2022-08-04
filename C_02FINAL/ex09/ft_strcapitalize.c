/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:15:57 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/18 11:08:46 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isalphanum(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i = 1;
	while (str[i])
	{
		if (isalphanum(str[i - 1]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
		}
		if (!isalphanum(str[i - 1]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	s[] = "CoucOu, comme nt=ca vA";

	printf("%s\n", ft_strcapitalize(s));
}*/
