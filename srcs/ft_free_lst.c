#include "ft_pushswap.h"

void	ft_free_lst(t_tab *a)
{
	t_tab	*b;
	t_tab	*c;

	b = a;
	while (b != NULL)
	{
		c = b;
		b = b->next;
		free(c);
	}
}
