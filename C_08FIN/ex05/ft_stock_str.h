/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboetti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:31:17 by sboetti           #+#    #+#             */
/*   Updated: 2022/08/01 18:31:41 by sboetti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRS_TO_TAB_H
# define FT_STRS_TO_TAB_H
struct s_stock_str *ft_strs_to_tab(int ac, char **av);
typedef struct s_stock_str
{
int size;
char *str;
char *copy;
} t_stock_str;
#endif
