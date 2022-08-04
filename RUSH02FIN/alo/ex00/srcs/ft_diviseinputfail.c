/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diviseinputfail.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:46:22 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/31 20:19:10 by eguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	empty_tab(char **t_final)
{
	int		c;
	int		c2;

	c = 0;
	c2 = 0;
	while (t_final[c])
	{
		while (t_final[c][c2])
		{
			t_final[c][c2] = '\0';
			c2++;
		}
		c2 = 0;
		c++;
	}
}

char	**ft_diviseinput(char *str)
{
	int		i;
	char	**t_final;
	int		tnum;

	tnum = (ft_strlen(str) / 3) + (ft_binaire(ft_strlen(str) % 3));
	printf("tnum = %d\n", tnum);
	t_final = malloc(sizeof(*t_final) * tnum + 1);
	if (t_final == NULL)
		return (NULL);
	i = 0;
	t_final[3] = malloc(sizeof(char));
	t_final[2] = malloc(sizeof(char) * 3);
	t_final[1] = malloc(sizeof(t_final[2]));
	t_final[0] = malloc(sizeof(t_final[2]));
	while (i < 4)
	{
		if (t_final[i] == NULL)
			return (NULL);
		i++;
	}
	int		i_tt;
	int		i_t;
	int		i_g;

	i_tt = tnum;
	i_t = 0;
	i_g = 0;
	printf ("que\n");

	while (i_tt >= 0)
	{
		printf("i_tt = %d\n", i_tt);
		while (i_t >= 0)
		{
			if (i_t == 3)
				t_final[i_tt][3] = '\0';
			else
			{
				if (ft_isdigit(str[(ft_strlen(str) - 1) - i_g]) == 1)
				{
					t_final[i_tt][i_t] = str[(ft_strlen(str) - 1) - i_g];
					printf("i_g = %d, str[c] = %c\n", i_g, str[(ft_strlen(str) - 1) - i_g]);
				}
				i_g++;
			}
			i_t--;
		}
		printf("t_final = %s\n", t_final[i_tt]);
		i_t = 3;
		i_tt--;
	}
	return (/*empty_tab(*/t_final/*)*/); 
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("<i>\n");
	char **tabb = ft_diviseinput(argv[1]);
	printf("%s, %s,\n", tabb[0], tabb[1]);
	free(tabb);
}
