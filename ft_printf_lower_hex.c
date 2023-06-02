/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lower_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:53:42 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/02 21:07:54 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_lower_hex(unsigned long long nbr, t_placeholder ph)
{
	size_t l;
	long long digit;

	l = 0;
	digit = get_digit_count(nbr, 16);
	if (!(ph.flags & HYPHEN) && digit < ph.width)
		l += ft_putchar_n(ph.padding, ph.width - digit);
	if (nbr && ph.flags & HASH)
		l += ft_putstr_r("0x");
	if (digit < ph.precision)
		l += ft_putchar_n('0', ph.precision - digit);
	l += ft_putnbr_base(nbr, HEXADECIMAL_L);
	if ((ph.flags & HYPHEN) && digit < ph.width)
		l += ft_putchar_n(ph.padding, ph.width - digit);
	return (l);
}