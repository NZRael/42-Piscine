/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:07:09 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/23 17:16:35 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	verifparams(int argc, char **argv)
{
	char	*str;
	int		i;

	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		if (str[31] == '\0')
		{
			while ((str[i] >= '1' && str[i] <= '4') && str[i + 1] == ' ')
			{
				i += 2;
			}
			if (i == 30)
				return (1);
		}
	}
	return (0);
}
