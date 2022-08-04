/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:40:25 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/16 18:44:58 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *aptr, int *bptr)
{
	int	temp;

	temp = *aptr;
	*aptr = *bptr;
	*bptr = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	ft_swap(&a,&b);
	printf("a = %d b = %d", a, b);
}
