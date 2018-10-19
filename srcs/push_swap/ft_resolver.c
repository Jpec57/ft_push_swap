#include "../../libft/includes/libft.h"
#include "../../Includes/ft_checker.h"
#include "../../Includes/ft_push_swap.h"

void		ft_analyse_order(t_stack **a, t_stack *ordered)
{
	t_stack		*start;
	t_stack		*start_ordered;
	int			pos;
	int			currentPos;

	currentPos = 0;
	start = *a;
	pos = 0;
	while (ordered)
	{
		*a = start;
		while ((*a)->nb != ordered->nb)
			(*a) = (*a)->next;
		(*a)->pos = pos;
		pos++;
		ordered = ordered->next;
	}
	*a = start;
	while (*a)
	{
		(*a)->currentPos = currentPos++;
		*a = (*a)->next;
	}
	*a = start;
}

t_stack			*ft_sort_stack(t_stack *a)
{
	int			change;
	int			tmp;
	t_stack		*start;

	change = 1;
	start = a;
	while (change)
	{
		change = 0;
		while (a->next)
		{
			if (a->nb > (a->next)->nb)
			{
				tmp = a->nb;
				a->nb = (a->next)->nb;
				a->next->nb = tmp;
				change = 1;
				a = start;
			}
			else
				a = a->next;
		}

	}
	a = start;
	return (a);
}

void		ft_resolver(t_stack **a, t_stack **b)
{
	t_stack *sorted;

	sorted = ft_copy_stack(*a);
	ft_analyse_order(a, ft_sort_stack(sorted));
	//ft_print_stack(*a, 'A');
	ft_compute_resolver(a, b);
}
