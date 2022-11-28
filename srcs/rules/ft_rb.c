/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 18:09:36 by antton-t          #+#    #+#             */
/*   Updated: 2021/08/25 17:04:57 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_rb(t_tab **b)
{
	t_tab	*tmp;
	t_tab	*re_tmp;
	t_tab	*b1;

	write (1, "rb\n", 3);
	re_tmp = *b;
	b1 = *b;
	if (*b == NULL)
		return ;
	if (b1->next == NULL)
		return ;
	if (b1->next != NULL)
		b1 = b1->next;
	tmp = b1;
	*b = b1;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = re_tmp;
	re_tmp->next = NULL;
}
