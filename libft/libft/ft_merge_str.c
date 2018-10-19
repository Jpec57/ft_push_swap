/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:14:36 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:14:37 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_merge_str(char *old, char *new)
{
	char *str;

	if ((str = malloc(sizeof(str) * (ft_strlen(old) +
		ft_strlen(new) + 1))) == NULL)
		return (NULL);
	ft_strcpy(str, old);
	ft_strcat(str, new);
	free(old);
	free(new);
	return (str);
}
