#include "../../libft/includes/libft.h"
#include "../../Includes/ft_checker.h"
#include "../../Includes/ft_push_swap.h"

int         *getCurrentPos(int pos, t_stack *a, t_stack *b)
{
    int         *currentPos;
    t_stack     *a_start;
    t_stack     *b_start;

    currentPos = malloc(sizeof(int) * 2);
    currentPos[0]= 0;
    while (a)
    {
        if (a->pos == pos)
        {
            currentPos[1] = a->currentPos;
            a = a_start;
            return (currentPos);
        }
        a = a->next;
    }
    currentPos[0] = 1;
    while (b)
    {
        if (b->pos == pos)
        {
            currentPos[1] = b->currentPos;
            b = b_start;
            return (currentPos);
        }
        b = b->next;
    }
    return (0);
}