/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reduce_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:16:09 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:16:10 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_reduce_str(char *to_reduce, int len)
{
	char	*str_new;
	int		i;

	if ((size_t)len == ft_strlen(to_reduce))
	{
		free(to_reduce);
		return (NULL);
	}
	if ((str_new = malloc(sizeof(str_new) *
		(ft_strlen(&to_reduce[len]) + 1))) == NULL)
		return (NULL);
	i = 0;
	while (to_reduce[len])
	{
		str_new[i] = to_reduce[len];
		i++;
		len++;
	}
	str_new[i] = '\0';
	free(to_reduce);
	return (str_new);
}
