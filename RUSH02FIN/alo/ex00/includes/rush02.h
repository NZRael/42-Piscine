/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:58:16 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/31 20:15:37 by eguerra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void			ft_putchar(char c);
void			ft_putstr(char *str);

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

unsigned int	ft_atoi(char *str);
int				check_dic(void);
char			**ft_diviseinput(char *str);

int	ft_binaire(int a)
{
	if (a != 0)
	{
		return (1);
	}
	return (0);
}

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
#endif
