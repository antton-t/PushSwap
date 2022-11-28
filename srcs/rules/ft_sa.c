/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:23:52 by antton-t          #+#    #+#             */
/*   Updated: 2021/08/05 21:17:24 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sa(t_tab *a)
{
	t_tab	*tmp;

	write (1, "sa\n", 3);
	if (a == NULL)
	{
		write (1, "sa\n", 3);
		return ;
	}
	else
	{
		tmp = a;
		tmp = tmp->next;
		ft_swap(&a->value, &tmp->value);
	}
	return ;
}
