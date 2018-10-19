/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 11:41:11 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 11:43:04 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_checker.h"
#include "../../Includes/ft_push_swap.h"
#include "../../libft/libft/libft.h"

int		main(int argc, char **argv)
{
	int			i;
	t_stack		*stack_a;
	t_stack		*stack_b;
	int			special;

	if (argc <= 1 && (special = 0) == 0)
		return (1);
	if (argc == 2 && (special = -1) < 0)
	{
		argv = ft_strsplit(argv[1], ' ');
		argc = ft_get_table_size(argv);
		ft_printf("SIZE: %d\n", argc);
	}
	i = argc;
	if (ft_input_errors(argc, argv))
		return (ft_write_error("Error\n"));
	ft_create_stack(&stack_a, ft_atoi_n_check(argv[--i]), -1);
	while (special < --i)
		ft_push_stack(&stack_a, ft_atoi_n_check(argv[i]), -1);
	if (ft_duplicate_search(stack_a))
		return (1);
	// ft_print_both(stack_a, stack_b);
	//if (ft_get_size_stack(stack_a) == 1) return (0);
	ft_resolver(&stack_a, &stack_b);
	// ft_print_both(stack_a, stack_b);
	return (0);
}
