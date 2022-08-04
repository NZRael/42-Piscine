/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:28:45 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/16 18:45:46 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*int	main(void)
{
	int	ptr;
	int	ptr2;

	ptr = 10;
	ptr2 = 2;
	ft_ultimate_div_mod(&ptr, &ptr2);
	printf("a = %d et b = %d", ptr, ptr2);
}*/
