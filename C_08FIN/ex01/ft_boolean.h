/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:27:45 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/01 16:42:44 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define EVEN(nbr) nbr%2==0
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.""\n"
# define ODD_MSG "I have an odd number of arguments.""\n"
# define SUCCESS 0
#endif
