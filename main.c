/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:33:09 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 19:20:43 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

t_tab	*ft_main2(char **argv, int argc, int nb)
{
	t_tab	*a;
	int		i;

	i = 0;
	a = NULL;
	if (argc == 1)
	{
		write(1, "Pas de tri\n", 11);
		return (a);
	}
	else
	{
		if (ft_check_argv1(argv) == 0)
		{
			write(1, "Err0r\n", 6);
			return (a);
		}
		while (argv[++i])
		{
			nb = ft_get_nb(argv[i]);
			a = ft_fill_a(nb, a);
		}
	}
	return (a);
}

int	ft_check_double(t_tab *a)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_sort_in_tab(a, ft_lst_size(a));
	tab = ft_sort_tab(tab, ft_lst_size(a));
	while (i < ft_lst_size(a))
	{
		if (tab[i] == tab[i + 1])
		{
			free(tab);
			return (1);
		}
		else
			i++;
	}
	free(tab);
	return (0);
}

void	ft_main1(t_tab *a, t_tab *b)
{
	int	i;

	i = 0;
	i = ft_lst_size(a);
	if (ft_check_lst(a) == 1)
		;
	else if (i <= 1)
		;
	else if (i <= 3)
		ft_sort_three(&a);
	else if (i <= 5)
		ft_sort_five(&a, &b);
	else if (i == 100)
		ft_sort_hundred(&a, &b);
	else if (i == 500)
		ft_sort_five_hundred(&a, &b);
	else
		ft_sort_else(&a, &b);
}

int	main(int argc, char **argv)
{
	t_tab	*a;
	t_tab	*b;
	int		nb;

	a = NULL;
	b = NULL;
	nb = 0;
	a = ft_main2(argv, argc, nb);
	if (ft_check_double(a) == 1)
	{
		write(1, "Err0r\n", 6);
		return (0);
	}
	if (a == NULL)
		return (0);
	b = (t_tab *)malloc(sizeof(t_tab) * ft_lst_size(a));
	b = NULL;
	ft_main1(a, b);
/*	while (a != NULL)
	{
		printf ("a => %i\n",a->value);
		a = a->next;
	}
*/	ft_free_lst(a);
	ft_free_lst(b);
	return (0);
}
