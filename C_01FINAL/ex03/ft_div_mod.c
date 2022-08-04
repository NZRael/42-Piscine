/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:13:32 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/16 18:45:19 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int ptr;
	int ptr2;
	int div;
	int mod;

	ptr = 10;
	ptr2 = 2;
	ft_div_mod(ptr, ptr2, &div, &mod);
	printf("div = %d, mod = %d", div, mod);
}*/
