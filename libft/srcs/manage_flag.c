/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:23:18 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:23:19 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	calc_int_flags(int size, t_parse *datas, char signe)
{
	if (datas->precision >= 0)
		datas->zero = 0;
	datas->precision -= size;
	datas->precision = datas->precision >= 0 ? datas->precision : 0;
	if ((datas->plus == 1 && signe == '+') || signe == '-' || datas->space == 1)
		size++;
	datas->width -= (datas->precision + size);
}

void	calc_uint_flags(int size, t_parse *datas)
{
	if (datas->precision >= 0)
		datas->zero = 0;
	datas->precision -= size;
	if ((datas->converter == 'o' || datas->converter == 'O') &&
		datas->hashtag == 1)
		datas->precision -= 1;
	datas->precision = datas->precision >= 0 ? datas->precision : 0;
	if (ft_char_in_str("Xx", datas->converter) && datas->hashtag == 1)
		size += 2;
	if (ft_char_in_str("Oo", datas->converter) && datas->hashtag == 1)
		size++;
	datas->width -= (datas->precision + size);
}
