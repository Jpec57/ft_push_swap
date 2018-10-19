/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_pct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:24:35 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:24:36 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	manage_pct(t_parse *datas, t_buffer *buff, va_list args)
{
	if (datas->minus == 0)
		datas->zero == 1 ? ft_putnchar_buff(buff, '0', (datas->width - 1)) :
		ft_putnchar_buff(buff, ' ', (datas->width - 1));
	ft_putnchar_buff(buff, '%', 1);
	if (datas->minus == 1)
		ft_putnchar_buff(buff, ' ', (datas->width - 1));
}
