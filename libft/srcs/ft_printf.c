/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:22:55 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:22:56 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <locale.h>

int		ft_control_center(char *str, va_list args)
{
	t_buffer buff;

	ft_bzero(&buff, sizeof(t_buffer));
	while (*str)
	{
		if (buff.i >= BUFF_SIZE)
			ft_clean_buff(&buff);
		if (*str == '%' && *(str + 1) != '\0')
			str = ft_percentage_parsing(str + 1, &buff, args);
		else if (*str != '\0' && *str != '%')
		{
			(buff.buff)[buff.i] = *str;
			buff.i++;
		}
		str++;
	}
	write(1, buff.buff, (buff.i));
	return ((buff.empty * BUFF_SIZE) + buff.i);
}

int		ft_printf(char *str, ...)
{
	va_list		args;
	int			ret;

	ret = 0;
	va_start(args, str);
	if (str)
		ret = ft_control_center(str, args);
	va_end(args);
	return (ret);
}
