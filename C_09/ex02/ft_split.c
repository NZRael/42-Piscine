/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 21:10:55 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/03 13:29:12 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

char	*ft_strsplitdup(char *src, int min, int max)
{
	char	*str;
	int		i;

	i = max - min;
	str = malloc(sizeof(char) * i + 1);
	i = 0;
	if (str == NULL)
		return (NULL);
	while (min < max)
	{
		str[i] = src[min];
		i++;
		min++;
	}
	str[i] = '\0';
	return (str);
}

int	ischarset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	kuantanamo(char *str, char *charset)
{
	int		i;
	int		mot;

	i = 0;
	mot = 0;
	while (str[i])
	{
		while (ischarset(str[i], charset) && str[i])
			i++;
		if (str[i])
			mot++;
		while (!ischarset(str[i], charset) && str[i])
			i++;
	}
	return (mot);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		start;
	char	**tab;

	tab = malloc(sizeof(char *) * kuantanamo(str, charset) + 1);
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (ischarset(str[i], charset) && str[i])
			i++;
		start = i;
		while (!ischarset(str[i], charset) && str[i])
			i++;
		if (start != i)
			tab[j++] = ft_strsplitdup(str, start, i);
	}
	tab[j] = 0;
	return (tab);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	tab = ft_split(argv[1], argv[2]);
	while (i < 1)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/