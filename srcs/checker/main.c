#include "../../Includes/ft_checker.h"
#include "../../Includes/ft_push_swap.h"
#include "../../libft/includes/libft.h"

int			main(int argc, char **argv)
{
	int			i;
	t_stack		*stack_a;
	int			special;

	if (argc <= 1 && (special = 0) == 0)
		return (1);
	if (argc == 2 && (special = -1) < 0)
	{
		argv = ft_strsplit(argv[1], ' ');
		argc = ft_get_table_size(argv);
	}
	i = argc;
	if (ft_input_errors(argc, argv))
	{
		ft_write_error("Error\n");
		return (1);
	}
	ft_create_stack(&stack_a, ft_atoi_n_check(argv[--i]), -1);
	while (special < --i)
		ft_push_stack(&stack_a, ft_atoi_n_check(argv[i]), -1);
	if (ft_duplicate_search(stack_a))
		return (1);
	ft_print_stack(stack_a, 'A');
	return (0);
}
