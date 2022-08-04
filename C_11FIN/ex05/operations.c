/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 21:24:33 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/03 21:52:59 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	addition(int op1, int op2)
{
	return (op1 + op2);
}

int	soustraction(int op1, int op2)
{
	return (op1 - op2);
}

int	multipl(int op1, int op2)
{
	return (op1 * op2);
}

void	divise(int op1, int op2)
{
	if (op2 == 0)
	{
		write (1, "Stop : division by zero", 23);
	}
	else
		ft_putnbr(op1 / op2);
}

void	modulo(int op1, int op2)
{
	if (op2 == 0)
	{
		write (1, "Stop : modulo by zero", 21);
	}
	else
		ft_putnbr(op1 % op2);
}
