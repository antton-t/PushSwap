/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 18:40:12 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:17:16 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sort_tab_2(t_tab *a, t_tab *b, int **tab_a, int **tab_b)
{
	*tab_a = ft_sort_in_tab(a, 3);
	*tab_b = ft_sort_in_tab(b, 2);
}

void	ft_sort_five2(t_tab **a, t_tab **b, int *tab_a, int *tab_b)
{
	if (tab_b[0] > tab_a[2] && tab_b[1] > tab_a[2])
	{
		ft_pa(a, b);
		ft_pa(a, b);
		ft_ra(a);
		ft_ra(a);
	}
	if (tab_b[0] < tab_a[2] && tab_b[0] > tab_a[1] && tab_b[1] < tab_a[2]
		&& tab_b[1] > tab_a[1])
	{
		ft_rra(a);
		ft_pa(a, b);
		ft_pa(a, b);
		ft_ra(a);
		ft_ra(a);
		ft_ra(a);
	}
}

void	ft_sort_five3(t_tab **a, t_tab **b, int *tab_a, int *tab_b)
{
	if (tab_b[0] < tab_a[2] && tab_b[0] > tab_a[1] && tab_b[1] < tab_a[1]
		&& tab_b[1] > tab_a[0])
	{
		ft_rra(a);
		ft_pa(a, b);
		ft_ra(a);
		ft_ra(a);
		ft_pa(a, b);
		ft_sa(*a);
	}
	if (tab_b[0] > tab_a[2] && tab_b[1] > tab_a[1] && tab_b[1] < tab_a[2])
	{
		ft_pa(a, b);
		ft_ra(a);
		ft_ra(a);
		ft_pa(a, b);
		ft_sa(*a);
		ft_rra(a);
	}
}

void	ft_sort_five4(t_tab **a, t_tab **b, int *tab_a, int *tab_b)
{
	if (tab_b[0] > tab_a[1] && tab_b[0] < tab_a[2] && tab_b[1] < tab_a[0])
	{
		ft_rra(a);
		ft_pa(a, b);
		ft_ra(a);
		ft_ra(a);
		ft_pa(a, b);
	}
	if (tab_b[0] > tab_a[2] && tab_b[1] > tab_a[0] && tab_b[1] < tab_a[1])
	{
		ft_pa(a, b);
		ft_ra(a);
		ft_pa(a, b);
		ft_sa(*a);
	}
	if (tab_b[0] > tab_a[0] && tab_b[0] < tab_a[1] && tab_b[1] < tab_a[0])
	{
		ft_pa(a, b);
		ft_sa(*a);
		ft_pa(a, b);
	}
}

void	ft_sort_five(t_tab **a, t_tab **b)
{
	int	*tab_a;
	int	*tab_b;
	int	size;

	size = ft_lst_size(*a);
	if (ft_lst_size(*a) == 5)
	{
		ft_pb(a, b);
		ft_pb(a, b);
	}
	else
		ft_pb(a, b);
	if (size != 5)
		ft_sort_four(a, b);
	else
	{
		ft_sort_three(a);
		ft_sort_two(b);
		ft_sort_tab_2(*a, *b, &tab_a, &tab_b);
		ft_sort_five1(a, b, tab_a, tab_b);
		ft_sort_five2(a, b, tab_a, tab_b);
		ft_sort_five3(a, b, tab_a, tab_b);
		ft_sort_five4(a, b, tab_a, tab_b);
	}
}
