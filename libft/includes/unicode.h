/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unicode.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbella <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:09:55 by jbella            #+#    #+#             */
/*   Updated: 2018/10/06 09:32:37 by jbella           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNICODE_H
# define UNICODE_H

typedef	struct			s_mask
{
	const unsigned int	m1;
	const unsigned int	m2;
	const unsigned int	m3;
}						t_mask;

const t_mask g_mask =
{
	.m1 = 49280,
	.m2 = 14712960,
	.m3 = 4034953344,
};
#endif
