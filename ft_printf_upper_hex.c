/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_upper_hex.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 20:55:39 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/03 03:20:46by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_placeholder	get_output_length(unsigned long long digit, t_placeholder ph)
{
	if (ph.precision != -1 && ph.precision > (long long)digit)
		ph.len = ph.precision;
	else
		ph.len = digit;
	return (ph);
}

static t_placeholder	adjust_padding(unsigned long long nbr, t_placeholder ph)
{
	if (!nbr && !ph.precision && (ph.flags & ZERO))
		ph.padding = ' ';
	return (ph);
}

size_t	ft_printf_upper_hex(unsigned long long nbr, t_placeholder ph)
{
	size_t	l;
	long long	digit;

	l = 0;
	digit = get_digit_count(nbr, 16);
	ph = get_output_length(digit, ph);
	ph = adjust_padding(nbr, ph);
	if (!(ph.flags & HYPHEN) && ph.len < ph.width)
		l += ft_putchar_n(ph.padding, ph.width - ph.len);
	if (nbr && ph.flags & HASH)
		l += ft_putstr_r("0X");
	if (digit < ph.precision)
		l += ft_putchar_n('0', ph.precision - digit);
	if (!nbr && !ph.precision && ph.width != -1)
		l += ft_putchar_r(' ');
	else if (!nbr && !ph.precision)
		l += 0;
	else
		l += ft_putnbr_base(nbr, HEXADECIMAL_U);
	if ((ph.flags & HYPHEN) && ph.len < ph.width)
		l += ft_putchar_n(ph.padding, ph.width - ph.len);
	return (l);
}
