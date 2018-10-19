#include "../../libft/includes/libft.h"
#include "../../Includes/ft_checker.h"
#include "../../Includes/ft_push_swap.h"

t_stack		*ft_copy_stack(t_stack *original)
{
	t_stack		*copy;
	t_stack		*start;		

	start = original;
	ft_create_stack(&copy, original->nb, original->pos);
	original = original->next;
	while (original)
	{
		ft_push_stack(&copy, original->nb, original->pos);
		original = original->next;
	}
	return (copy);
}

int			ft_get_stack_size(t_stack *a)
{
	t_stack		*start;
	int			size;

	size = 0;
	start = a;
	while (a)
	{
		size++;
		a = a->next;
	}
	a = start;
	return (size);
}