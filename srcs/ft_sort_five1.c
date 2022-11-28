/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:29:57 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:17:24 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sort_five1(t_tab **a, t_tab **b, int *tab_a, int *tab_b)
{
	if (tab_b[0] < tab_a[0] && tab_b[1] < tab_a[0])
	{
		ft_pa(a, b);
		ft_pa(a, b);
	}
	if (tab_b[0] > tab_a[2] && tab_b[1] < tab_a[0])
	{
		ft_pa(a, b);
		ft_ra(a);
		ft_pa(a, b);
	}
	if (tab_b[0] > tab_a[0] && tab_b[0] < tab_a[1] && tab_b[1] > tab_a[0]
		&& tab_b[1] < tab_a[1])
	{
		ft_pa(a, b);
		ft_sa(*a);
		ft_pa(a, b);
		ft_sa(*a);
	}
}
