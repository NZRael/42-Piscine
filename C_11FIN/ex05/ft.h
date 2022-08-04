/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 20:35:18 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/03 21:51:44 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		positiv(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		addition(int op1, int op2);
int		soustraction(int op1, int op2);
int		multipl(int op1, int op2);
void	divise(int op1, int op2);
void	modulo(int op1, int op2);

#endif
