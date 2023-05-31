/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_integer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:31:15 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/31 17:43:35 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_integer(long long nbr, t_placeholder ph)
{
	size_t	l;

	(void)ph;
	l = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		l += ft_putchar_r('-');
	}
	return (l + ft_putnbr_base(nbr, DECIMAL));
}
