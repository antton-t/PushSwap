/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:56:43 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 14:09:34 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rra(t_tab **a)
{
	t_tab	*tmp;
	t_tab	*re_tmp;
	int		size;

	write (1, "rra\n", 4);
	if ((*a) == NULL)
		return ;
	tmp = (*a);
	size = ft_lst_size(tmp);
	if (size == 1)
		return ;
	while (size > 2)
	{
		tmp = tmp->next;
		size--;
	}
	re_tmp = (*a);
	(*a) = tmp;
	(*a) = (*a)->next;
	(*a)->next = re_tmp;
	tmp->next = NULL;
}
