/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:46:33 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:17:53 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sort_tab_4(t_tab *a, t_tab *b, int **tab_a, int **tab_b)
{
	*tab_a = ft_sort_in_tab(a, 3);
	*tab_b = ft_sort_in_tab(b, 1);
}

void	ft_sort_four(t_tab **a, t_tab **b)
{
	int	*tab_a;
	int	*tab_b;

	ft_sort_three(a);
	ft_sort_tab_4(*a, *b, &tab_a, &tab_b);
	if (tab_b[0] < tab_a[0])
		ft_pa(a, b);
	if (tab_b[0] > tab_a[2])
	{
		ft_pa(a, b);
		ft_ra(a);
	}
	if (tab_b[0] > tab_a[0] && tab_b[0] < tab_a[1])
	{
		ft_pa(a, b);
		ft_sa(*a);
	}
	if (tab_b[0] < tab_a[2] && tab_b[0] > tab_a[1])
	{
		ft_rra(a);
		ft_pa(a, b);
		ft_ra(a);
		ft_ra(a);
	}
    free(tab_a);
    free(tab_b);
}
