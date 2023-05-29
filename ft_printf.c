/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:03:05 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/29 23:55:32 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_vprintf(va_list *ap, const char *fmt)
{
	size_t	l;

	l = 0;
	if (*fmt == 'c')
		l += ft_printf_putchar((char)va_arg(*ap, int));
	else if (*fmt == 's')
		l += ft_printf_putstr((char *)va_arg(*ap, char *));
	else if (*fmt == 'p')
	{
		l += ft_printf_putstr("0x");
		l += ft_putnbr_base((long long)va_arg(*ap, long long), HEXADECIMAL_L);
	}
	else if (*fmt == 'd')
		l += ft_putnbr_base(va_arg(*ap, int), DECIMAL);
	else if(*fmt == 'i')
		l += ft_putnbr_base(va_arg(*ap, int), DECIMAL);
	else if(*fmt == 'u')
		l += ft_putnbr_base(va_arg(*ap, unsigned int), DECIMAL);
	else if(*fmt == 'x')
		l += ft_putnbr_base(va_arg(*ap, unsigned int), HEXADECIMAL_L);
	else if(*fmt == 'X')
		l += ft_putnbr_base(va_arg(*ap, unsigned int), HEXADECIMAL_U);
	else if(*fmt == '%')
		l += ft_printf_putchar('%');
	return (l);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	size_t	l;

	l = 0;
	va_start(ap, fmt);
	if (!fmt)
		return (0);
	while (*fmt)
	{
		if (*fmt == '%')
		{
			l += ft_vprintf(&ap, ++fmt);
			fmt++;
		}
		else
			l += ft_printf_putchar(*fmt++);
	}
	va_end(ap);
	return (l);
}
