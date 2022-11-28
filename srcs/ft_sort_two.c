/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:47:18 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:18:41 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sort_tab_two(t_tab *a, int *i, int *j)
{
	int	*tab;

	tab = ft_sort_in_tab(a, 2);
	*i = tab[0];
	*j = tab[1];
}

void	ft_sort_two(t_tab **a)
{
	int	i;
	int	j;

	ft_sort_tab_two(*a, &i, &j);
	if (i < j)
		ft_sb(*a);
}
