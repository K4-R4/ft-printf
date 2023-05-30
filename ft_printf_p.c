/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:51:35 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/30 22:53:59 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	get_digit_count(unsigned long long nbr, size_t base)
{
	size_t	l;

	l = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		nbr /= base;
		l++;
	}
	return (l);
}

static void	ft_putptr_base_helper(unsigned long long nbr, char *base, size_t b)
{
	if (nbr >= (unsigned long long)b)
		ft_putptr_base_helper(nbr / b, base, b);
	ft_putchar_r(base[nbr % b]);
}

static size_t	ft_putptr_base(unsigned long long nbr, char *base)
{
	size_t	b;
	size_t	l;

	b = ft_strlen(base);
	l = get_digit_count(nbr, b);
	ft_putptr_base_helper(nbr, base, b);
	return (l);
}
size_t	ft_printf_p(unsigned long long ptr, t_placeholder ph)
{
	size_t	l;

	(void)ph;
	l = 0;
	l += ft_putstr_r("0x");
	return (l + ft_putptr_base(ptr, HEXADECIMAL_L));
}
