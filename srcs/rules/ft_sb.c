/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 19:27:05 by antton-t          #+#    #+#             */
/*   Updated: 2021/07/01 19:41:03 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_sb(t_tab *b)
{
	t_tab	*tmp;

	write (1, "sb\n", 3);
	if (b == NULL)
		return ;
	else
	{
		tmp = b;
		tmp = tmp->next;
		ft_swap(&b->value, &tmp->value);
	}
	return ;
}
