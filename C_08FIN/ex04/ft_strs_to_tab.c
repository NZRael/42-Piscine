/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:27:49 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/02 11:48:11 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (len(src) + 1));
	if (str == NULL)
		return NULL;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*shlag;
	int			i;

	i = 0;
	shlag = malloc(sizeof(t_stock_str) * (ac + 1));
	if (shlag == NULL)
		return (NULL);
	while (i < ac)
	{
		shlag[i].size = len(av[i]);
		shlag[i].str = av[i];
		shlag[i].copy = ft_strdup(av[i]);
		i++;
	}
	shlag[i].str = 0;
	return (shlag);
}