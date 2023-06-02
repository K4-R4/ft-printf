/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:37:00 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/31 17:39:52 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_uint(unsigned long long nbr, t_placeholder ph)
{
	size_t	l;

	l = 0;
	if (ph.type == U_DEC)
	{
		if (!(ph.flags & HYPHEN) && get_digit_count(nbr, 10) < ph.width)
			l += ft_putchar_n(ph.padding, ph.width - get_digit_count(nbr, 10));
		if (get_digit_count(nbr, 10) < ph.precision)
			l += ft_putchar_n('0', ph.precision - get_digit_count(nbr, 10));
		if (!nbr && !ph.precision)
			return (0);
		else
			l += ft_putnbr_base(nbr, DECIMAL);
		if ((ph.flags & HYPHEN) && get_digit_count(nbr, 10) < ph.width)
			l += ft_putchar_n(ph.padding, ph.width - get_digit_count(nbr, 10));
		return (l);
	}
	else if (ph.type == HEX_L)
	{
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
	else
	{
		if (!(ph.flags & HYPHEN) && get_digit_count(nbr, 16) < ph.width)
			l += ft_putchar_n(ph.padding, ph.width - get_digit_count(nbr, 16));
		if (nbr && ph.flags & HASH)
			l += ft_putstr_r("0X");
		if (get_digit_count(nbr, 16) < ph.precision)
			l += ft_putchar_n('0', ph.precision - get_digit_count(nbr, 16));
		l += ft_putnbr_base(nbr, HEXADECIMAL_U);
		if ((ph.flags & HYPHEN) && get_digit_count(nbr, 16) < ph.width)
			l += ft_putchar_n(ph.padding, ph.width - get_digit_count(nbr, 16));
		return (l);
	}
}
