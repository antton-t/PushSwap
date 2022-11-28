/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 20:49:35 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:18:29 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int *ft_sort_tab_three(t_tab *a, int *i, int *j, int *k)
{
	int	*tab;

	tab = ft_sort_in_tab(a, 3);
	*i = tab[0];
	*j = tab[1];
	*k = tab[2];
    return (tab);
}

void	ft_sort_2(t_tab **a)
{
	int	*tab;

	tab = ft_sort_in_tab(*a, 2);
	if (tab[0] > tab[1])
		ft_sa(*a);
    free(tab);
}

void	ft_sort_three1(t_tab **a)
{
	int	i;
	int	j;
	int	k;
    int *tab;

	tab = ft_sort_tab_three(*a, &i, &j, &k);
	if (i > j && i < k && j < k)
		ft_sa(*a);
	else if (i > j && j > k)
	{
		ft_sa(*a);
		ft_rra(a);
	}
	else if (i > k && j < k)
		ft_ra(a);
	else if (i < k && j > k)
	{
		ft_sa(*a);
		ft_ra(a);
	}
	else if (i < j && i > k)
		ft_rra(a);
    free(tab);
}

void	ft_sort_three(t_tab **a)
{
	if (ft_lst_size(*a) == 2)
		ft_sort_2(a);
	else
		ft_sort_three1(a);
}
