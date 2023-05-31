/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 21:51:35 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/31 17:16:50 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_ptr(unsigned long long ptr, t_placeholder ph)
{
	size_t	l;

	(void)ph;
	l = 0;
	l += ft_putstr_r("0x");
	return (l + ft_putnbr_base(ptr, HEXADECIMAL_L));
}
