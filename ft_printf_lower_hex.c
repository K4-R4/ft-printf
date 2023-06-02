/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lower_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:53:42 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/02 20:54:53 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_lower_hex(unsigned long long nbr, t_placeholder ph)
{
	size_t l;

	l = 0;
	if (!(ph.flags & HYPHEN) && get_digit_count(nbr, 16) < ph.width)
		l += ft_putchar_n(ph.padding, ph.width - get_digit_count(nbr, 16));
	if (nbr && ph.flags & HASH)
		l += ft_putstr_r("0x");
	if (get_digit_count(nbr, 16) < ph.precision)
		l += ft_putchar_n('0', ph.precision - get_digit_count(nbr, 16));
	l += ft_putnbr_base(nbr, HEXADECIMAL_L);
	if ((ph.flags & HYPHEN) && get_digit_count(nbr, 16) < ph.width)
		l += ft_putchar_n(ph.padding, ph.width - get_digit_count(nbr, 16));
	return (l);
}