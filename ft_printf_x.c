/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 22:59:07 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/30 23:08:01 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_lower_x(unsigned int nbr, t_placeholder ph)
{
	size_t l;

	l = 0;
	if (ph.flags & HASH)
		l += ft_putstr_r("0x");
	return (l + ft_putnbr_base(nbr, HEXADECIMAL_L));
}

size_t	ft_printf_upper_x(unsigned int nbr, t_placeholder ph)
{
	size_t l;

	l = 0;
	if (ph.flags & HASH)
		l += ft_putstr_r("0X");
	return (l + ft_putnbr_base(nbr, HEXADECIMAL_U));
}
