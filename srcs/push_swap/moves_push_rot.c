#include "../../Includes/ft_checker.h"
#include "../../Includes/ft_push_swap.h"
#include "../../libft/includes/libft.h"

void		ft_move_pa(t_stack **a, t_stack **b)
{
	t_stack		*popped;

	popped = ft_pop_stack(b);
	if (!popped)
		return ;
	ft_push_stack(a, popped->nb, popped->pos);	
	ft_set_correct_pos(a);
	ft_set_correct_pos(b);
	ft_putendl("pa");
}

void		ft_move_pb(t_stack **a, t_stack **b)
{
	t_stack		*popped;

	popped = ft_pop_stack(a);
	if (!popped)
		return ;
	ft_push_stack(b, popped->nb, popped->pos);
	ft_set_correct_pos(a);
	ft_set_correct_pos(b);
	ft_putendl("pb");
}

void		ft_move_ra(t_stack **a, int print)
{
	t_stack		*popped;
	t_stack		*start;

	popped = ft_pop_stack(a);
	popped->next = 0;
	start = *a;
	if (*a)
	{
		while ((*a)->next)
			(*a) = (*a)->next;
		(*a)->next = popped;
		(*a) = start;
	}
	else
		*a = popped;
	ft_set_correct_pos(a);
	if (print)
		ft_putendl("ra");
}

void		ft_move_rb(t_stack **b, int print)
{
	t_stack		*popped;
	t_stack		*start;

	popped = ft_pop_stack(b);
	popped->next = 0;
	start = *b;
	if (*b)
	{
		while ((*b)->next)
			(*b) = (*b)->next;
		(*b)->next = popped;
		(*b) = start;
	}
	else
		*b = popped;
	ft_set_correct_pos(b);
	if (print)
		ft_putendl("rb");
}

void		ft_move_rr(t_stack **a, t_stack **b)
{
	ft_move_ra(a, 0);
	ft_move_rb(b, 0);
}
