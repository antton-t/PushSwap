/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:44:28 by antton-t          #+#    #+#             */
/*   Updated: 2021/08/10 19:56:35 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

void	ft_ra(t_tab **a)
{
	t_tab	*tmp;
	t_tab	*re_tmp;
	t_tab	*a1;

	write (1, "ra\n", 3);
	re_tmp = *a;
	a1 = *a;
	if (*a == NULL)
		return ;
	if (a1->next == NULL)
		return ;
	if (a1->next != NULL)
		a1 = a1->next;
	tmp = a1;
	*a = a1;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = re_tmp;
	re_tmp->next = NULL;
}
