/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:19:12 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/20 12:04:53 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *dest)
{
	unsigned int	taille_dest;

	taille_dest = 0;
	while (dest[taille_dest] != '\0')
		taille_dest++;
	return (taille_dest);
}

void	ft_strncat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	taille_origin_dest;

	i = 0;
	j = 0;
	taille_origin_dest = ft_strlen(dest);
	j = ft_strlen(src);
	if (size < 1)
		return (ft_strlen(src));
	else if (size > taille_origin_dest)
	{
		ft_strncat(dest, src, size);
		i = ft_strlen((dest + 0));
	}
	if (size > taille_origin_dest)
		return (taille_origin_dest + j);
	return (j + size);
}
/*
#include <string.h>
int	main(void)
{
	char	s1[] = "coucou";
	char	s2[] = "hello";
	char	s3[] = "coucou";
	char	s4[] = "hello";
	
	printf("%lu\n", strlcat(s1, s2, 0));
	printf("%s\n", s1);
	printf("%s\n", s2);

	printf("%u\n", ft_strlcat(s3, s4, 0));
	printf("%s\n", s3);
	printf("%s\n", s4);
}*/
