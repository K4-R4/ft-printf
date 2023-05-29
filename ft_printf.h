/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:03:12 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/29 23:43:57 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXADECIMAL_U "0123456789ABCDEF"
# define HEXADECIMAL_L "0123456789abcdef"
# define DECIMAL "0123456789"

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *fmt, ...);
size_t	ft_printf_putchar(char c);
size_t	ft_printf_putstr(char *s);
size_t	ft_putnbr_base(long long nbr, char *base);

#endif
