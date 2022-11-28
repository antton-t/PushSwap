/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antton-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:42:52 by antton-t          #+#    #+#             */
/*   Updated: 2021/09/15 18:13:59 by antton-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
# define FT_PUSHSWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "struct.h"

int		ft_get_nb(char *str);
t_tab	*ft_fill_a(int nb, t_tab *a);
int		ft_check_argv1(char **argv);
void	ft_sa(t_tab *a);
void	ft_swap(int *a, int *b);
void	ft_sb(t_tab *b);
void	ft_ss(t_tab *a, t_tab *b);
void	ft_pa(t_tab **a, t_tab **b);
void	ft_free_lst(t_tab *a);
void	ft_pb(t_tab **a, t_tab **b);
void	ft_rb(t_tab **b);
void	ft_ra(t_tab **a);
void	ft_rr(t_tab *a, t_tab *b);
void	ft_rra(t_tab **a);
void	ft_rrb(t_tab **b);
void	ft_rrr(t_tab *a, t_tab *b);
int		ft_lst_size(t_tab *a);
void	ft_sort_two(t_tab **a);
void	ft_sort_three(t_tab **a);
int		*ft_sort_in_tab(t_tab *tmp, int size);
void	ft_sort_five(t_tab **a, t_tab **b);
void	ft_sort_five1(t_tab **a, t_tab **b, int *tab_a, int *tab_b);
void	ft_sort_four(t_tab **a, t_tab **b);
void	ft_sort_hundred(t_tab **a, t_tab **b);
void	ft_sort_five_hundred(t_tab **a, t_tab **b);
int		*ft_sort_tab(int *tab_sort, int size);
int	ft_check_lst(t_tab *a);
void	ft_sort_else(t_tab **a, t_tab **b);

#endif
