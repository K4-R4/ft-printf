/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:03:12 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/30 03:30:58 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEXADECIMAL_U "0123456789ABCDEF"
# define HEXADECIMAL_L "0123456789abcdef"
# define DECIMAL "0123456789"

# include "./libft/libft.h"
# include <stdarg.h>

typedef enum e_flag
{
	HYPHEN = 1 << 0,
	ZERO = 1 << 1,
	PERIOD = 1 << 2,
	HASH = 1 << 3,
	SPACE = 1 << 4,
	PLUS = 1 << 5
}				t_flag;

typedef struct s_placeholder
{
	char		flags;
	size_t		field_width;
	size_t		precision;
}				t_placeholder;

int				ft_printf(const char *fmt, ...);
size_t			ft_printf_putchar(char c);
size_t			ft_printf_putstr(char *s);
size_t			ft_putnbr_base(long long nbr, char *base);

#endif
