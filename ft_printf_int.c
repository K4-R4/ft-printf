/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:31:15 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/31 17:43:35 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_int(long long nbr, t_placeholder ph)
{
	size_t	l;
	bool	neg;

	l = 0;
	neg = nbr < 0;
	if (nbr < 0)
	{
		nbr *= -1;
		l += ft_putchar_r('-');
	}
	else
	{
		if (ph.flags & PLUS)
			l += ft_putchar_r('+');
		else if (ph.flags & SPACE)
			l += ft_putchar_r(' ');
	}
	if (!(ph.flags & HYPHEN) && get_digit_count(nbr, 10) < ph.width)
		l += ft_putchar_n(ph.padding, ph.width - get_digit_count(nbr, 10) - neg);
	if (get_digit_count(nbr, 10) < ph.precision)
		l += ft_putchar_n('0', ph.precision - get_digit_count(nbr, 10));
	if (!nbr && !ph.precision)
		return (0);
	else
		l += ft_putnbr_base(nbr, DECIMAL);
	if ((ph.flags & HYPHEN) && !(ph.flags & ZERO) && get_digit_count(nbr, 10) < ph.width)
		l += ft_putchar_n(ph.padding, ph.width - get_digit_count(nbr, 10) - neg);
	return (l);
}
