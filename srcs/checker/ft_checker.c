/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 11:41:49 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 14:53:57 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/includes/libft.h"
#include "../../libft/includes/ft_printf.h"
#include "../../Includes/ft_checker.h"

long		ft_atoi_long(const char *str)
{
	size_t	i;
	int		sign;
	long	nb;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}

int			ft_atoi_n_check(char *str)
{
	long		nb;

	nb = ft_atoi_long(str);
	if (nb > INT_MAX || nb < INT_MIN)
	{
		ft_write_error("Error\n");
		exit(1);
	}
	return ((int) nb);
}

int			ft_duplicate_search(t_stack *a)
{
	t_stack *it;
	int		nb;

	while (a != NULL)
	{
		it = a->next;
		nb = a->nb;
		while (it != NULL)
		{
			if (it->nb == nb)
			{
				ft_write_error("Error\n");
				return (1);
			}
			it = it->next;
		}
		a = a->next;
	}
	return (0);
}

int			ft_input_errors(int argc, char **argv)
{
	int		size;
	int		i;
	char	c;

	while (0 < --argc)
	{
		i = 0;
		size = ft_strlen(argv[argc]);
		while (i < size)
		{
			c = argv[argc][i];
			if (i == 0 && (c == '+' || c == '-') && !(c = argv[argc][++i]))
				return (1);
			if (!ft_isdigit(c))
				return (1);
			i++;
		}
	}
	return (0);
}
