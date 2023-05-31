/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:22:33 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/31 17:11:55 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar_r(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

size_t	ft_putstr_r(char *s)
{
	if (!s)
		return (ft_putstr_r("(null)"));
	return (write(STDOUT_FILENO, s, ft_strlen(s)));
}

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

static void	ft_putnbr_base_helper(unsigned long long nbr, char *base, size_t b)
{
	if (nbr >= (unsigned long long)b)
		ft_putnbr_base_helper(nbr / b, base, b);
	ft_putchar_r(base[nbr % b]);
}

size_t	ft_putnbr_base(unsigned long long nbr, char *base)
{
	size_t	b;
	size_t	l;

	b = ft_strlen(base);
	l = get_digit_count(nbr, b);
	ft_putnbr_base_helper(nbr, base, b);
	return (l);
}
