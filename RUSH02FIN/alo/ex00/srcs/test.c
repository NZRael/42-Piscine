/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:52:20 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/31 20:45:47 by gpolve-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
/*
while (str[i])
analyse du chiffre
mise en ralation avec la biblio
anaylse nb de chiffres suivant
mise en relation avec la biblio
i++*/
/*// ecrire a = écrire ce qui se trouve à la ligne associée à 
la valeur de 'a' ( a = nb retour à la ligne)*/
int	ft_if(int a, char *str, int i, int p)
{
	int	o;

	o = 0;
	while (str[p] && str[i])
		o++;
	if (((a == '1' && str[i + 1] == '\0') || (a != '1')
			|| (a == '1' && str[i + 2] != '\0')) && (str[i - 1] != '1'
			|| str[i + 1] != '\0'))
	{
		if (o == 1 && str[i])
			a = a + 18;
	}
	if (o == 2 && str[i])
	{
		//ecrire a
		a = 28;//ecrire de nouveau a (qui correspond maintenant à cent)
	}
	return (0);
}

char	dix(int a, char *str, int i)
{
	int	b;

	b = str[i + 1];
	a = a + 9 + b;
	return (0);
}
/*^ecrire blablabla*/

char	*test(char *str, int a)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (str[i])
	{
		p = 0;
		if (str[i] >= 48 && str[i] <= 57)
		{
			a = str[i] - 48;
			if (a == 1 && str[i + 1] && str[i + 2] == '\0')
			{
				dix(a, str, i);
				i = i + 2;
				a = str[i] - 48;
			}
			p = i + 1;
			ft_if(a, str, i, p);
		}
	}
	return (0);
}
/*if (o == 2)
a = 28;
//écrire "hundred" qui se trouve à la 29eme ligne 
(soit 28 retour à la ligne) 
// là je lis le dictionnaire en lui envoyant 
a pour le nb de lignes à sauter*/
