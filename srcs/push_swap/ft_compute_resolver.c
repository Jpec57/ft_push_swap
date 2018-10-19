#include "../../libft/includes/libft.h"
#include "../../Includes/ft_checker.h"
#include "../../Includes/ft_push_swap.h"

void		ft_compute_resolver(t_stack **a, t_stack **b)
{
    int     i;
    int     *data;
    int     repeat;
    int     size;

    i = 0;   
    while ((size = ft_get_stack_size(*a)) > 1)
    {
        data = getCurrentPos(i, *a, *b);
        if (data[0] == 0)
        {
            if (data[1] < (ft_get_stack_size(*a) / 2))
            {
                repeat = size / 2 - data[1] - 1;
                while (repeat--)
                    ft_move_ra(a, 1);
            }
            else
            {
                repeat = size - data[1];
                while (repeat--)
                    ft_move_rra(a, 1);
            }
            ft_move_pb(a, b);
        }
        i++;
    }
    while (ft_get_stack_size(*b))
        ft_move_pa(a, b);
    //ft_print_both(*a, *b);
}