/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:08:57 by sboetti           #+#    #+#             */
/*   Updated: 2022/07/29 19:47:04 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkdouble(char *str, char c, int pos)
{
	int		i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    char    *mot;
    char    *phrase;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    i = 0;
    mot = argv[1];
    phrase = argv[2];
    while (mot[i])
    {
        j = 0;
        while (phrase[j])
        {
            if (mot[i] == phrase[j])
            {
                if (checkdouble(mot, mot[i], i))
                {
                    write(1, &mot[i], 1);
                    break ;
                }
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}