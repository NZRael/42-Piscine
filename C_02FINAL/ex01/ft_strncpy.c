/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:37:09 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/19 12:00:30 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <string.h>

int	main()
{
	char	s1[] = "cli";
	char	s2[] = "bobo";
	char	s3[] = "cli";
	char	s4[] = "bobo";


	printf("%s\n", strncpy(s1, s2, 2));

	printf("\n");

	printf("%s\n", ft_strncpy(s3, s4, 2));
	//printf("\n");
	//printf("%s\n", s1);
	//printf("%s\n", s2);
}*/
