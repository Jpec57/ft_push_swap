/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:23:04 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 08:23:06 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnchar_buff(t_buffer *buff, unsigned char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (buff->i >= BUFF_SIZE)
			ft_clean_buff(buff);
		(buff->buff)[buff->i] = c;
		(buff->i)++;
		i++;
	}
}

void	ft_putstr_buff(t_buffer *buff, char *str)
{
	while (*str)
	{
		ft_putnchar_buff(buff, *str, 1);
		str++;
	}
}

void	ft_putstrn_buff(t_buffer *buff, char *str, int n)
{
	int i;

	i = 0;
	while (str[i] && i < n)
	{
		ft_putnchar_buff(buff, str[i], 1);
		i++;
	}
}

void	ft_clean_buff(t_buffer *buff)
{
	write(1, buff->buff, (buff->i));
	ft_bzero(buff->buff, BUFF_SIZE);
	buff->i = 0;
	(buff->empty)++;
}
