/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:40:48 by rchbouki          #+#    #+#             */
/*   Updated: 2022/07/17 10:48:41 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	rush02(int x, int y);

int	main(void)
{
	rush(1, 5);
	rush02(5, 1);
	return (0);
}
