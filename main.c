/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:17:30 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/01 22:19:01 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "1234567890";
	const char	*s2 = NULL;

	printf("==========%%s==========\n");
	printf("%d\n", printf("%s\n", s1));
	printf("%d\n", ft_printf("%s\n", s1));
	printf("%d\n", printf("%s\n", s2));
	printf("%d\n", ft_printf("%s\n", s2));
	printf("==========%%d==========\n");
	printf("%d\n", printf("%d\n", 120));
	printf("%d\n", ft_printf("%d\n", 120));
	printf("%d\n", printf("%d\n", -9));
	printf("%d\n", ft_printf("%d\n", -9));
	printf("%d\n", printf("%d\n", 0));
	printf("%d\n", ft_printf("%d\n", 0));
	printf("%d\n", printf("%d\n", -256));
	printf("%d\n", ft_printf("%d\n", -256));
	printf("%d\n", printf("%d\n", INT_MAX));
	printf("%d\n", ft_printf("%d\n", INT_MAX));
	printf("%d\n", printf("%d\n", INT_MIN));
	printf("%d\n", ft_printf("%d\n", INT_MIN));
	printf("%d\n", printf("%d\n", (int)LONG_MIN));
	printf("%d\n", ft_printf("%d\n", (int)LONG_MIN));
	printf("==========%%p==========\n");
	printf("%d\n", printf("%p\n", (void *)LONG_MAX));
	printf("%d\n", ft_printf("%p\n", (void *)LONG_MAX));
	printf("%d\n", printf("%p\n", (void *)LONG_MIN));
	printf("%d\n", ft_printf("%p\n", (void *)LONG_MIN));
	printf("==========%%#x==========\n");
	printf("%d\n", printf("%#x\n", 256));
	printf("%d\n", ft_printf("%#x\n", 256));
	printf("%d\n", printf("%#x\n", 0));
	printf("%d\n", ft_printf("%#x\n", 0));
	printf("==========%%#X==========\n");
	printf("%d\n", printf("%#X\n", 256));
	printf("%d\n", ft_printf("%#X\n", 256));
	printf("%d\n", printf("%#X\n", 0));
	printf("%d\n", ft_printf("%#X\n", 0));
	printf("==========%%.d==========\n");
	printf("%d\n", printf("%.4d\n", 120));
	printf("%d\n", ft_printf("%.4d\n", 120));
	printf("%d\n", printf("%.3d\n", -9));
	printf("%d\n", ft_printf("%.3d\n", -9));
	printf("%d\n", printf("%.0d\n", 120));
	printf("%d\n", ft_printf("%.0d\n", 120));
	printf("%d\n", printf("%.0d\n", 0));
	printf("%d\n", ft_printf("%.0d\n", 0));
	printf("%d\n", printf("%.d\n", 120));
	printf("%d\n", ft_printf("%.d\n", 120));
	printf("==========%%.s==========\n");
	printf("%d\n", printf("%.4s\n", s1));
	printf("%d\n", ft_printf("%.4s\n", s1));
	printf("%d\n", printf("%.0s\n", s1));
	printf("%d\n", ft_printf("%.0s\n", s1));
	printf("%d\n", printf("%.4s\n", s2));
	printf("%d\n", ft_printf("%.4s\n", s2));
	printf("%d\n", printf("%.0s\n", s2));
	printf("%d\n", ft_printf("%.0s\n", s2));
	printf("%d\n", printf("%.1s\n", ""));
	printf("%d\n", ft_printf("%.1s\n", ""));
	printf("%d\n", printf("%.s\n", ""));
	printf("%d\n", ft_printf("%.s\n", ""));
	printf("%d\n", printf("%.s\n", "1234"));
	printf("%d\n", ft_printf("%.s\n", "1234"));
	return (0);
}
