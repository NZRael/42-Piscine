/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:25:39 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/25 17:49:59 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[x])
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <string.h>

int	main(void)
{
	char	dest[18] = "coucou";
	const char	src[9] = "coucoula";
	char	dest1[] = "co";
	char	src1[] = "cou";

	printf("%s\n", strcat(dest, src));

	printf("%s\n", ft_strcat(dest1, src1));
}*/
