/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:24:22 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:24:24 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	get_cvalue(t_parse *datas, va_list args, wchar_t *value)
{
	if (datas->identifier == l || datas->converter == 'C')
		*value = (wchar_t)va_arg(args, long int);
	else
		*value = (char)va_arg(args, int);
}

void	manage_char(t_parse *datas, t_buffer *buff, va_list args)
{
	wchar_t		value;
	int			size;

	get_cvalue(datas, args, &value);
	size = get_char_size(value);
	if (datas->minus == 0)
		ft_putnchar_buff(buff, datas->zero == 1 ? '0' : ' ',
		(datas->width - size));
	if (value <= 127)
		ft_putnchar_buff(buff, value, 1);
	else if (value <= 2047)
		octets2_unicode(value, buff);
	else if (value <= 65535)
		octets3_unicode(value, buff);
	else
		octets4_unicode(value, buff);
	if (datas->minus == 1)
		ft_putnchar_buff(buff, ' ', (datas->width - size));
}
