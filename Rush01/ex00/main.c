/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 10:26:26 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/23 18:27:59 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		cmp(char *s1, char *s2);
int		verifparams(int argc, char **argv);
int		premier_tableau(char **argv);
void	print_tab1(void);
int		deuxieme_tableau(char **argv);
void	print_tab2(void);
int		tab3(char **argv);
void	print3(void);
int		tab4(char **argv);
void	print4(void);
int		tab5(char **argv);
void	print5(void);
int		tab6(char **argv);
void	print6(void);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (verifparams(argc, argv))
	{
		if (premier_tableau(argv))
			print_tab1();
		if (deuxieme_tableau(argv))
			print_tab2();
		if (tab3(argv))
			print3();
		if (tab4(argv))
			print4();
		if (tab5(argv))
			print5();
		if (tab6(argv))
			print6();
	}
	else
		write(1, "Error", 5);
	write(1, "\n", 1);
}
