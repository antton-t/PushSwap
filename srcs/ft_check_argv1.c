/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:36:56 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 17:44:56 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	ft_check_lst(t_tab *a)
{
	t_tab *tmp;
	t_tab *tmp_next;

	tmp = a;
	tmp_next = tmp->next;
	while (tmp_next != NULL)
	{
		if (tmp->value < tmp_next->value)
		{
			tmp = tmp->next;
			tmp_next = tmp_next->next;
		}
		else
			return (0);
	}
	return (1);
}
int	ft_isnum(char *str)
{
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			return (0);
		else
			str++;
	}
	return (1);
}

int	ft_check_argv1(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_isnum(argv[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
