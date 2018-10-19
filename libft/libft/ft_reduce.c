/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:16:02 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:16:03 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_reduce(void *to_reduce, size_t to_cut, size_t len)
{
	unsigned char	*new;
	size_t			i;

	i = 0;
	new = NULL;
	if (to_cut >= len)
	{
		free(to_reduce);
		return (NULL);
	}
	if ((new = ft_memalloc(len - to_cut)) == NULL)
		return (NULL);
	while (to_cut < len)
	{
		new[i] = ((unsigned char*)to_reduce)[to_cut];
		i++;
		to_cut++;
	}
	free(to_reduce);
	return ((void*)new);
}
