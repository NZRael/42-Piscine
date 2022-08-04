/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:53:44 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/20 11:46:47 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	verif(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (to_find[x])
	{
		if (str[i] == to_find[x])
		{
			i++;
			x++;
		}
		else
			i++;
	}
	if (i == x)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (str[0] == '\0' && to_find[0] == '\0')
		return ("");
	if (to_find)
	{
		while (str[i])
		{
			if (verif(&str[i], &to_find[0]))
				return (&str[i]);
			else
				i++;
		}
	}
	return (0);
}
/*
#include <string.h>
int	main(void)
{
	char	s1[] = "";
	char	s2[] = "";
	char	s4[] = "";

	printf("%s\n", strstr(s1, s4));
	printf("%s\n", ft_strstr(s1, s2));
}*/
