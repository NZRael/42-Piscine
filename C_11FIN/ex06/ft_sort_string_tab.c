/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 17:04:12 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/04 17:16:11 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
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

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	j;
	int	x;

	j = 0;
	x = 0;
	while (tab[x + 1] != '\0')
	{
		j = x + 1;
		while (tab[j] != '\0')
		{
			if (ft_strcmp(tab[x], tab[j]) > 0)
				ft_swap(&tab[x], &tab[j]);
			j++;
		}
		x++;
	}
}
/*
int		main(int argc, char **argv)
{
	int		i;

	ft_sort_string_tab(argv);
	i = -1;
	while (++i < argc)
		printf("%s\n", argv[i]);
}
*/
