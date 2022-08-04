/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:39:01 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/19 18:40:51 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	strlenne(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!dest || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (strlenne(src));
}
/*
#include <string.h>

int	main(void)
{
	char	s[] = "c'est la";
	char	s2[] = "voici la";
	char	s3[] = "c'est la";
	char	s4[] = "voici la";

	strlcpy(s3, s4, 8);
	printf("%s\n", s3);
	printf("%s\n", s4);
	printf("%lu\n", strlcpy(s3, s4, 8));

	ft_strlcpy(s, s2, 10);
	printf("%s\n", s);
	printf("%s\n", s2);
	printf("%u\n", ft_strlcpy(s, s2, 10));
}*/
