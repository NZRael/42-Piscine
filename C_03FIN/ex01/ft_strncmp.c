/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:00:03 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/19 10:22:35 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while ((s1[i] || s2[i]) && n--)
		{
			if (s1[i] == s2[i])
				i++;
			else
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}

/*#include <string.h>
int	main(void)
{
	char	str[] = "";
	char	str1[] = "hella";

	printf("%d\n", strncmp(str, str1, 5));
	printf("%d\n", ft_strncmp(str, str1, 5));
}*/
