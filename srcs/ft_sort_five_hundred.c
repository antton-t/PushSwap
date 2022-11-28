/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five_hundred.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 13:45:11 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:17:45 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sort_to_top6(int size, t_tab **a, t_tab **b, int i)
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

void	ft_sort_to_top5(int *tab, t_tab **a, t_tab **b, int i)
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
	ft_sort_to_top6(size, a, b, i);
}

void	ft_sort_five_hundred3(t_tab **a, t_tab **b, int i, int *tab)
{
	int	x;
	int	count;

	x = 49;
	while (((*a)->next) != NULL)
	{
		count = 50;
		while ((*a) != NULL && count > 0)
		{
			if ((*a) != NULL && (*a)->value <= tab[x] && (*a)->value < tab[i])
			{
				ft_pb(a, b);
				count--;
			}
			if (ft_lst_size(*a) == 1)
				break ;
			else
				ft_ra(a);
		}
		x = x + 50;
	}
}

void	ft_sort_five_hundred2(t_tab **a, t_tab **b, int i, int *tab)
{
	ft_sort_five_hundred3(a, b, i, tab);
	i--;
	while (i >= 0)
	{
		ft_sort_to_top5(tab, a, b, i);
		i--;
	}
}

void	ft_sort_five_hundred(t_tab **a, t_tab **b)
{
	int		*tab;
	int		i;

	tab = ft_sort_in_tab(*a, ft_lst_size(*a));
	tab = ft_sort_tab(tab, ft_lst_size(*a));
	i = 0;
	i = ft_lst_size(*a);
	i--;
	ft_sort_five_hundred2(a, b, i, tab);
	free(tab);
}
