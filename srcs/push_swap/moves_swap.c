#include "../../Includes/ft_checker.h"
#include "../../libft/includes/libft.h"


void		ft_move_sa(t_stack **a, int print)
{
	t_stack		*second;

	if (!(*a) || !((*a)->next))
		return ;
	second = (*a)->next;
	second->currentPos = 0;
	(*a)->currentPos = 1;
	(*a)->next = second->next;
	second->next = *a;
	*a = second;
	if (print)
		ft_putendl("sa");
	}

void		ft_move_sb(t_stack **b, int print)
{
	t_stack		*second;

	if (!(*b) || !((*b)->next))
		return ;
	second = (*b)->next;
	second->currentPos = 0;
	(*b)->currentPos = 1;
	(*b)->next = second->next;
	second->next = *b;
	*b = second;
	if (print)
		ft_putendl("sb");	
}

void		ft_move_ss(t_stack **a, t_stack **b)
{
	ft_move_sa(a, 0);
	ft_move_sb(b, 0);
	ft_putendl("ss");
}
