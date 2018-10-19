/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:13:25 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:13:26 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *alloc;

	if ((alloc = malloc(size)) == NULL)
		return (NULL);
	if (alloc == NULL)
		return (NULL);
	return (ft_memset(alloc, 0, size));
}
