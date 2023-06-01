/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:50:28 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/01 22:15:36 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf_str(char *s, t_placeholder ph)
{
	if (!s)
		return (ft_printf_str("(null)", ph));
	if (ph.precision != -1 && ph.precision < (int)ft_strlen(s))
		return (ft_putnstr_r(s, ph.precision));
	return (ft_putstr_r(s));
}
