/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:13:57 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:13:58 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*srcs;
	char		*dests;

	dests = dst;
	srcs = src;
	while (n > 0)
	{
		*dests = *srcs;
		n--;
		dests++;
		srcs++;
	}
	return (dst);
}
