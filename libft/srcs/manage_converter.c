/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_converter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:23:12 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 09:32:57 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include "../includes/manage_conv.h"

void	ft_manage_conv(t_parse datas, t_buffer *buff, va_list args)
{
	size_t	i;

	i = 0;
	while (i < FUNCTION_NUMBER)
	{
		if (ft_char_in_str(g_conv[i].str, datas.converter))
			g_conv[i].f(&datas, buff, args);
		i++;
	}
}
