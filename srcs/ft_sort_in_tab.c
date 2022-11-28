/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:18:07 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:18:10 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	*ft_sort_in_tab(t_tab *tmp, int size)
{
	int	*tab;
	int	i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * (size + 1));
	if (tab == NULL)
		return (NULL);
	while (tmp != NULL)
	{
		tab[i] = tmp->value;
		i++;
		tmp = tmp->next;
	}
	return (tab);
}
