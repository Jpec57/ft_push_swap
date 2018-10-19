#include "../../Includes/ft_checker.h"
#include "../../libft/includes/libft.h"

void		ft_set_correct_pos(t_stack **a)
{
	t_stack		*start;
	int			i;

	start = *a;
	i = 0;
	while (*a)
	{
		(*a)->currentPos = i;
		i++;
		*a = (*a)->next;
	}
	*a = start;
}

void		ft_move_rra(t_stack **a, int print)
{
	t_stack		*last;
	t_stack		*start;

	start = *a;
	if ((*a)->next && (*a)->next->next)
	{
		while (((*a)->next)->next)
			(*a) = (*a)->next;
		last = (*a)->next;
		(*a)->next = 0;
		*a = start;
		last->next = *a;
		*a = last;
	}
	else
	{
	if ((*a)->next)
		{
			last = (*a)->next;
			last->next = (*a);
			(*a)->next = 0;
			*a = last;
		}
	}
	ft_set_correct_pos(a);
	if (print)
		ft_putendl("rra");
}

void		ft_move_rrb(t_stack **b, int print)
{
	t_stack		*last;
	t_stack		*start;

	start = *b;
	if ((*b)->next && (*b)->next->next)
	{
		while (((*b)->next)->next)
			(*b) = (*b)->next;
		last = (*b)->next;
		(*b)->next = 0;
		*b = start;
		last->next = *b;
		*b = last;
	}
	else
	{
		if ((*b)->next)
		{
			last = (*b)->next;
			last->next = (*b);
			(*b)->next = 0;
			*b = last;
		}
	}
	ft_set_correct_pos(b);
	if (print)
		ft_putendl("rrb");	
}

void		ft_move_rrr(t_stack **a, t_stack **b)
{
	ft_move_rra(a, 0);
	ft_move_rrb(b, 0);
}
