/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:13:33 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:13:34 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*src_str;
	unsigned char		*dst_str;

	i = 0;
	dst_str = (unsigned char *)dst;
	src_str = (unsigned char *)src;
	while (i < n)
	{
		dst_str[i] = src_str[i];
		i++;
		if (src_str[i - 1] == (unsigned char)c)
			return ((void *)(dst + i));
	}
	return (NULL);
}
