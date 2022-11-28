/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:27:10 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 14:09:02 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rrb(t_tab **b)
{
	t_tab	*tmp;
	t_tab	*re_tmp;
	int		size;

	write (1, "rrb\n", 4);
	if ((*b) == NULL)
		return ;
	tmp = (*b);
	size = ft_lst_size(tmp);
	if (size == 1)
		return ;
	while (size > 2)
	{
		tmp = tmp->next;
		size--;
	}
	re_tmp = (*b);
	(*b) = tmp;
	(*b) = (*b)->next;
	(*b)->next = re_tmp;
	tmp->next = NULL;
}
