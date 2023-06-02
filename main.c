/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:17:30 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/02 17:40:18 by tkuramot         ###   ########.fr       */
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
	printf("==========%%u==========\n");
	printf("%d\n", printf("%u\n", 120));
	printf("%d\n", ft_printf("%u\n", 120));
	printf("%d\n", printf("%u\n", -9));
	printf("%d\n", ft_printf("%u\n", -9));
	printf("%d\n", printf("%u\n", 0));
	printf("%d\n", ft_printf("%u\n", 0));
	printf("%d\n", printf("%u\n", -256));
	printf("%d\n", ft_printf("%u\n", -256));
	printf("%d\n", printf("%u\n", INT_MAX));
	printf("%d\n", ft_printf("%u\n", INT_MAX));
	printf("%d\n", printf("%u\n", INT_MIN));
	printf("%d\n", ft_printf("%u\n", INT_MIN));
	printf("%d\n", printf("%u\n", (int)LONG_MIN));
	printf("%d\n", ft_printf("%u\n", (int)LONG_MIN));
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
	printf("==========%%.u==========\n");
	printf("%d\n", printf("%.3u\n", 11));
	printf("%d\n", ft_printf("%.3u\n", 11));
	printf("%d\n", printf("%.4u\n", 120));
	printf("%d\n", ft_printf("%.4u\n", 120));
	printf("%d\n", printf("%.0u\n", 120));
	printf("%d\n", ft_printf("%.0u\n", 120));
	printf("%d\n", printf("%.0u\n", 0));
	printf("%d\n", ft_printf("%.0u\n", 0));
	printf("%d\n", printf("%.2u\n", 256));
	printf("%d\n", ft_printf("%.2u\n", 256));
	printf("%d\n", printf("%u\n", INT_MAX));
	printf("%d\n", ft_printf("%u\n", INT_MAX));
	printf("==========%%+d==========\n");
	printf("%d\n", printf("%+d\n", 120));
	printf("%d\n", ft_printf("%+d\n", 120));
	printf("%d\n", printf("%+d\n", -9));
	printf("%d\n", ft_printf("%+d\n", -9));
	printf("%d\n", printf("%+d\n", 0));
	printf("%d\n", ft_printf("%+d\n", 0));
	printf("%d\n", printf("%+d\n", -256));
	printf("%d\n", ft_printf("%+d\n", -256));
	printf("%d\n", printf("%+d\n", INT_MAX));
	printf("%d\n", ft_printf("%+d\n", INT_MAX));
	printf("%d\n", printf("%+d\n", INT_MIN));
	printf("%d\n", ft_printf("%+d\n", INT_MIN));
	printf("%d\n", printf("%+d\n", (int)LONG_MIN));
	printf("%d\n", ft_printf("%+d\n", (int)LONG_MIN));
	printf("==========%% d==========\n");
	printf("%d\n", printf("% d\n", 120));
	printf("%d\n", ft_printf("% d\n", 120));
	printf("%d\n", printf("% d\n", -9));
	printf("%d\n", ft_printf("% d\n", -9));
	printf("%d\n", printf("% d\n", 0));
	printf("%d\n", ft_printf("% d\n", 0));
	printf("%d\n", printf("% d\n", -256));
	printf("%d\n", ft_printf("% d\n", -256));
	printf("%d\n", printf("% d\n", INT_MAX));
	printf("%d\n", ft_printf("% d\n", INT_MAX));
	printf("%d\n", printf("% d\n", INT_MIN));
	printf("%d\n", ft_printf("% d\n", INT_MIN));
	printf("%d\n", printf("% d\n", (int)LONG_MIN));
	printf("%d\n", ft_printf("% d\n", (int)LONG_MIN));
	printf("===========%%-s============\n");
	printf("%d\n", printf("[%-4s]\n", "a"));
	printf("%d\n", ft_printf("[%-4s]\n", "a"));
	printf("%d\n", printf("[%-4s]\n", ""));
	printf("%d\n", ft_printf("[%-4s]\n", ""));
	printf("%d\n", printf("[%-4s]\n", "abcde"));
	printf("%d\n", ft_printf("[%-4s]\n", "abcde"));
	printf("===========%%-d============\n");
	printf("%d\n", printf("[%-4d]\n", 0));
	printf("%d\n", ft_printf("[%-4d]\n", 0));
	printf("%d\n", printf("[%-4d]\n", 12));
	printf("%d\n", ft_printf("[%-4d]\n", 12));
	printf("%d\n", printf("[%-4d]\n", 12345));
	printf("%d\n", ft_printf("[%-4d]\n", 12345));
	printf("===========%%-u============\n");
	printf("%d\n", printf("[%-3u]\n", 11));
	printf("%d\n", ft_printf("[%-3u]\n", 11));
	printf("%d\n", printf("[%-4u]\n", 120));
	printf("%d\n", ft_printf("[%-4u]\n", 120));
	printf("===========%%-x============\n");
	printf("%d\n", printf("[%-4x]\n", 12));
	printf("%d\n", ft_printf("[%-4x]\n", 12));
	printf("%d\n", printf("[%-4x]\n", 12345));
	printf("%d\n", ft_printf("[%-4x]\n", 12345));
	printf("===========================\n");
	printf("%d\n", printf("[%-11p]\n", (void *)INT_MIN));
	printf("%d\n", ft_printf("[%-11p]\n", (void *)INT_MIN));
	printf("%d\n", printf("[%-12p]\n", (void *)INT_MAX));
	printf("%d\n", ft_printf("[%-12p]\n", (void *)INT_MAX));
	printf("%d\n", printf("[%-12p]\n", (void *)ULONG_MAX));
	printf("%d\n", ft_printf("[%-12p]\n", (void *)ULONG_MAX));
	printf("%d\n", printf("[%-12p]\n", (void *)-ULONG_MAX));
	printf("%d\n", ft_printf("[%-12p]\n", (void *)-ULONG_MAX));
	return (0);
}
