/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:38:08 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:16:28 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

t_tab	*ft_fill_a(int nb, t_tab *a)
{
	t_tab	*tmp;
	t_tab	*new_nb;

	if (a == NULL)
	{
		a = (t_tab *)malloc(sizeof(t_tab));
		if (a == NULL)
			return (NULL);
		a->value = nb;
		a->next = NULL;
		return (a);
	}
	new_nb = (t_tab *)malloc(sizeof(t_tab));
	if (new_nb == NULL)
		return (NULL);
	tmp = a;
	while (a->next != NULL)
		a = a->next;
	new_nb->value = nb;
	new_nb->next = NULL;
	a->next = new_nb;
	return (tmp);
}
