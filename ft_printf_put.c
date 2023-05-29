/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_put.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:22:33 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/29 22:53:04 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

size_t	ft_printf_putstr(char *s)
{
	if (!s)
		return (ft_printf_putstr("(null)"));
	return (write(STDOUT_FILENO, s, ft_strlen(s)));
}

static size_t	get_digit_count(long long nbr, size_t base)
{
	size_t	l;

	l = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		nbr /= base;
		l++;
	}
	return (l);
}

static void	ft_putnbr_base_helper(long long nbr, char *base, size_t b)
{
	if (nbr >= (long long)b)
	{
		ft_putnbr_base_helper(nbr / b, base, b);
	}
	ft_printf_putchar(base[nbr % b]);
}

size_t	ft_putnbr_base(long long nbr, char *base)
{
	size_t	b;
	size_t	l;

	b = ft_strlen(base);
	l = get_digit_count(nbr, b);
	if (nbr < 0)
	{
		l += ft_printf_putchar('-');
		nbr *= -1;
	}
	ft_putnbr_base_helper(nbr, base, b);
	return (l);
}
