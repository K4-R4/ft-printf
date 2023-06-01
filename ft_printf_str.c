/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:50:28 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/02 02:15:29 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_str(char *s, t_placeholder ph)
{
	size_t	l;

	l = 0;
	if (!s)
		return (ft_printf_str("(null)", ph));
	if ((int)ft_strlen(s) < ph.field_width)
		l += ft_putstr_n(" ", ph.field_width - (int)ft_strlen(s));
	if (ph.precision != -1 && ph.precision < (int)ft_strlen(s))
		return (l + ft_putnstr_r(s, ph.precision));
	return (l + ft_putstr_r(s));
}
