/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:30:40 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 14:31:50 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/ft_checker.h"
#include "../../libft/includes/libft.h"
#include "../../libft/includes/ft_printf.h"

void		ft_print_both(t_stack *a, t_stack *b)
{
	ft_print_stack(a, 'A');
	ft_print_stack(b, 'B');
}

void		ft_print_stack(t_stack *stack, char s)
{
	ft_printf("---------------------------------\n");
	ft_printf("			%c		\n", s);
	ft_printf("---------------------------------\n");
	while (stack)
	{
		ft_printf("nb: %d | currentPos: %d | pos: %d\n", stack->nb, stack->currentPos, stack->pos);
		stack = stack->next;
	}
	ft_printf("\n\n");
}

int			ft_push_stack(t_stack **stack, int new_elem, int oldPos)
{
	t_stack		*elem;

	if (!(elem = malloc(sizeof(t_stack))))
		return (1);
	elem->nb = new_elem;
	elem->next = *stack;
	elem->pos = oldPos;
	elem->currentPos = -1;
	*stack = elem;
	return (0);
}

t_stack		*ft_pop_stack(t_stack **stack)
{
	t_stack		*del;

	if (*stack == NULL)
		return (NULL);
	del = *stack;
	if ((*stack)->next)
		*stack = (*stack)->next;
	else
		*stack = NULL;
	return (del);
}

int			ft_create_stack(t_stack **stack, int first, int oldPos)
{
	if (!(*stack = malloc(sizeof(t_stack))))
		return (1);
	(*stack)->nb = first;
	(*stack)->pos = oldPos;
	(*stack)->currentPos = -1;
	(*stack)->next = NULL;
	return (0);
}
