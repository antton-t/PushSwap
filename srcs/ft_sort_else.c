/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_else.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:24:29 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:17:00 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sort_to_top3(int size, t_tab **a, t_tab **b, int i)
{
	if (size <= i / 2)
	{
		while (size != 0)
		{
			ft_rb(b);
			size--;
		}
	}
	else if (size == 0)
		;
	else
	{
		while (size <= i)
		{
			ft_rrb(b);
			size++;
		}
	}
	ft_pa(a, b);
}

void	ft_sort_to_top4(int *tab, t_tab **a, t_tab **b, int i)
{
	t_tab	*tmp;
	int		size;

	size = 0;
	tmp = (*b);
	while (tmp != NULL && tmp->value != tab[i])
	{
		tmp = tmp->next;
		size++;
	}
	ft_sort_to_top3(size, a, b, i);
}

void	ft_sort_hundred3(t_tab **a, t_tab **b, int i, int *tab)
{
	while (((*a)->next) != NULL)
	{
		if ((*a) != NULL && (*a)->value != tab[i])
			ft_pb(a, b);
		if (ft_lst_size(*a) == 1)
			break ;
		else
			ft_ra(a);
	}
	i--;
	while (i >= 0)
	{
		ft_sort_to_top4(tab, a, b, i);
		i--;
	}
}

void	ft_sort_else(t_tab **a, t_tab **b)
{
	int		*tab;
	int		i;

	tab = ft_sort_in_tab(*a, ft_lst_size(*a));
	tab = ft_sort_tab(tab, ft_lst_size(*a));
	i = 0;
	i = ft_lst_size(*a);
	i--;
	ft_sort_hundred3(a, b, i, tab);
	free(tab);
}
