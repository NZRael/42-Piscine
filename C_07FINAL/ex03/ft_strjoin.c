/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:11:53 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/28 16:04:44 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*cpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*all;

	j = 0;
	i = 0;
	while (i < size)
		j += len(strs[i++]);
	if (size > 0)
		j += (size - 1) * len(sep);
	all = malloc(sizeof(char) * (j + 1));
	i = 0;
	j = 0;
	while (i < size)
	{
		cpy(all + j, strs[i]);
		j += len(strs[i]);
		if (++i < size)
			j += all + j + len(sep) - cpy(all + j, sep);
	}
	all[j] = '\0';
	return (all);
}
/*
int	main()
{
	char	*tab[4] = {"ab", "abc", "abcd", "abcde"};
	char	sep[] = "---";

	printf("%s\n", ft_strjoin(4, tab, sep));
	printf("%d\n", len(ft_strjoin(4, tab, sep)));
}*/
