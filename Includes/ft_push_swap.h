#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

typedef struct			s_data
{
	int					isAscending;

}						t_data;

/*
**			ft_compute_revolver.c
*/

void		ft_compute_resolver(t_stack **a, t_stack **b);

/*
**			ft_compute_utils.c
*/

int         *getCurrentPos(int pos, t_stack *a, t_stack *b);

/*
**			ft_resolver.c
*/
void		ft_analyse_order(t_stack **a, t_stack *ordered);
void		ft_resolver(t_stack **a, t_stack **b);
t_stack		*ft_sort_stack(t_stack *a);

/*
**			ft_stack2.c
*/

t_stack		*ft_copy_stack(t_stack *original);
int			ft_get_stack_size(t_stack *a);

/*
**			moves_push_rot.c
*/

void		ft_move_pa(t_stack **a, t_stack **b);
void		ft_move_pb(t_stack **a, t_stack **b);
void		ft_move_ra(t_stack **a, int print);
void		ft_move_rb(t_stack **b, int print);
void		ft_move_rr(t_stack **a, t_stack **b);

/*
**			moves_rev_rot.c
*/
void		ft_set_correct_pos(t_stack **a);
void		ft_move_rra(t_stack **a, int print);
void		ft_move_rrb(t_stack **b, int print);
void		ft_move_rrr(t_stack **a, t_stack **b);

/*
**			moves_swap.c
*/

void		ft_move_sa(t_stack **a, int print);
void		ft_move_sb(t_stack **b, int print);
void		ft_move_ss(t_stack **a, t_stack **b);

#endif
