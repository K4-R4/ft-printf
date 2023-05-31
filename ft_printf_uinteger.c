/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uinteger.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:37:00 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/31 17:39:52 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_uinteger(unsigned long long nbr, t_placeholder ph)
{
	if (ph.type == U_DEC)
		return (ft_putnbr_base(nbr, DECIMAL));
	else if (ph.type == HEX_L)
		return (ft_putnbr_base(nbr, HEXADECIMAL_L));
	else
		return (ft_putnbr_base(nbr, HEXADECIMAL_U));
}
