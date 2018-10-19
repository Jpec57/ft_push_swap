/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:21:03 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:21:04 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		get_size(char const *s)
{
	size_t len;
	size_t i;
	size_t j;

	i = 0;
	len = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		j = 0;
		while (s[i + j] == ' ' || s[i + j] == '\n'
				|| s[i + j] == '\t' || s[i + j] == '\0')
		{
			if (s[i + j] == '\0')
				return (len);
			j++;
		}
		len++;
		i++;
	}
	return (len);
}

char				*ft_strtrim(char const *s)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	size = get_size(s);
	if ((str = ft_strnew(size)) == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (j < size)
	{
		str[j] = s[i];
		j++;
		i++;
	}
	return (str);
}
