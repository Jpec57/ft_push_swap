/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:24:22 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 13:54:45 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECKER_H
# define FT_CHECKER_H

typedef struct		s_stack
{
	int				nb;
	int				pos;
	int				currentPos;
	struct s_stack	*next;
}					t_stack;

/*
**			ft_checker.c
*/
long		ft_atoi_long(const char *str);
int			ft_atoi_n_check(char *str);
int			ft_duplicate_search(t_stack *a);
int			ft_input_errors(int argc, char **argv);
int			main(int argc, char **argv);

/*
**			ft_stack.c
*/
int			ft_create_stack(t_stack **stack, int first, int oldPos);
int			ft_push_stack(t_stack **stack, int new_elem, int oldPos);
t_stack		*ft_pop_stack(t_stack **stack);
void		ft_print_stack(t_stack *stack, char s);
void		ft_print_both(t_stack *a, t_stack *b);

/*
**			utils.c
*/
int			ft_write_error(char *str);
int			ft_get_table_size(char **tab);


#endif
