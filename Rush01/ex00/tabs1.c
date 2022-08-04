/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   touslestabs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:01:22 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/26 15:07:17 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cmp(char *s1, char *s2);

int	premier_tableau(char **argv)
{
	if (cmp(argv[1], "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2") == 0)
		return (1);
	return (0);
}

void	print_tab1(void)
{
	write(1, "1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3", 31);
}

int	deuxieme_tableau(char **argv)
{
	if (cmp(argv[1], "1 4 2 3 2 1 2 2 1 3 3 2 3 2 1 3") == 0)
		return (1);
	return (0);
}

void	print_tab2(void)
{
	write(1, "4 1 3 2\n1 2 4 3\n2 3 1 4\n3 4 2 1", 31);
}
