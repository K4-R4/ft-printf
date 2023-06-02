/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 20:17:30 by tkuramot          #+#    #+#             */
/*   Updated: 2023/06/02 20:51:45 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char *ptr;
	char *s;

	ptr = "";
	s = NULL;
	printf("CONVERSION\n");
	printf("==============================CHR\n");
	printf("%d\n", printf("%cbc\n", 'a'));
	printf("%d\n", ft_printf("%cbc\n", 'a'));
	printf("------------------\n");
	printf("%d\n", printf("%c\n", 'A'));
	printf("%d\n", ft_printf("%c\n", 'A'));
	printf("------------------\n");
	printf("%d\n", printf("%c\n", 'a' + 256));
	printf("%d\n", ft_printf("%c\n", 'a' + 256));
	printf("------------------\n");
	printf("%d\n", printf("%c1234\n", -1));
	printf("%d\n", ft_printf("%c1234\n", -1));
	printf("=================================STR\n");
	printf("%d\n", printf("iiii%s\n", "abcde"));
	printf("%d\n", ft_printf("iiii%s\n", "abcde"));
	printf("------------------\n");
	printf("%d\n", printf("%s\n", ""));
	printf("%d\n", ft_printf("%s\n", ""));
	printf("------------------\n");
	printf("%d\n", printf("%siiii\n", s));
	printf("%d\n", ft_printf("%siiii\n", s));
	printf("=================================PTR\n");
	printf("%d\n", printf("%pqq\n", ptr));
	printf("%d\n", ft_printf("%pqq\n", ptr));
	printf("------------------\n");
	printf("%d\n", printf("%p\n", NULL));
	printf("%d\n", ft_printf("%p\n", NULL));
	printf("=================================DEC\n");
	printf("%d\n", printf("%dddd\n", 0));
	printf("%d\n", ft_printf("%dddd\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("%d\n", -1));
	printf("%d\n", ft_printf("%d\n", -1));
	printf("------------------\n");
	printf("%d\n", printf("%d\n", INT_MAX));
	printf("%d\n", ft_printf("%d\n", INT_MAX));
	printf("------------------\n");
	printf("%d\n", printf("1234%d\n", INT_MIN));
	printf("%d\n", ft_printf("1234%d\n", INT_MIN));
	printf("=================================INT\n");
	printf("%d\n", printf("%i\n", 0));
	printf("%d\n", ft_printf("%i\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("%i\n", -1));
	printf("%d\n", ft_printf("%i\n", -1));
	printf("------------------\n");
	printf("%d\n", printf("%i\n", INT_MAX));
	printf("%d\n", ft_printf("%i\n", INT_MAX));
	printf("------------------\n");
	printf("%d\n", printf("%i\n", INT_MIN));
	printf("%d\n", ft_printf("%i\n", INT_MIN));
	printf("=================================UINT\n");
	printf("%d\n", printf("xxx%u\n", 120));
	printf("%d\n", ft_printf("xxx%u\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("%u\n", 0));
	printf("%d\n", ft_printf("%u\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("%u\n", -1));
	printf("%d\n", ft_printf("%u\n", -1));
	printf("------------------\n");
	printf("%d\n", printf("%u\n", UINT_MAX));
	printf("%d\n", ft_printf("%u\n", UINT_MAX));
	printf("=================================hex\n");
	printf("%d\n", printf("uuu%x\n", 120));
	printf("%d\n", ft_printf("uuu%x\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("%x\n", 0));
	printf("%d\n", ft_printf("%x\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("%x\n", -1));
	printf("%d\n", ft_printf("%x\n", -1));
	printf("------------------\n");
	printf("%d\n", printf("%x\n", UINT_MAX));
	printf("%d\n", ft_printf("%x\n", UINT_MAX));
	printf("=================================HEX\n");
	printf("%d\n", printf("uuu%X\n", 120));
	printf("%d\n", ft_printf("uuu%X\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("%X\n", 0));
	printf("%d\n", ft_printf("%X\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("%X\n", -1));
	printf("%d\n", ft_printf("%X\n", -1));
	printf("------------------\n");
	printf("%d\n", printf("%X\n", UINT_MAX));
	printf("%d\n", ft_printf("%X\n", UINT_MAX));
	printf("=================================PERCENT\n");
	printf("%d\n", printf("%%\n"));
	printf("%d\n", ft_printf("%%\n"));
	printf("------------------\n");
	printf("%d\n", printf("%%%%\n"));
	printf("%d\n", ft_printf("%%%%\n"));
	printf("\n\n\n\n");
	printf("FLAGS\n");
	printf("=================================CHR=width\n");
	printf("%d\n", printf("[%4c]\n", 'a'));
	printf("%d\n", ft_printf("[%4c]\n", 'a'));
	printf("------------------\n");
	printf("%d\n", printf("[%1c]\n", 'a'));
	printf("%d\n", ft_printf("[%1c]\n", 'a'));
	printf("=================================STR=width\n");
	printf("%d\n", printf("[%4s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%4s]\n", "abcdefg"));
	printf("------------------\n");
	printf("%d\n", printf("[%8s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%8s]\n", "abcdefg"));
	printf("------------------\n");
	printf("%d\n", printf("[%8s]\n", s));
	printf("%d\n", ft_printf("[%8s]\n", s));
	printf("=================================PTR=width\n");
	printf("%d\n", printf("[%4p]\n", ptr));
	printf("%d\n", ft_printf("[%4p]\n", ptr));
	printf("------------------\n");
	printf("%d\n", printf("[%8p]\n", NULL));
	printf("%d\n", ft_printf("[%8p]\n", NULL));
	printf("=================================DEC=width\n");
	printf("%d\n", printf("[%4d]\n", 12));
	printf("%d\n", ft_printf("[%4d]\n", 12));
	printf("------------------\n");
	printf("%d\n", printf("[%8d]\n", 0));
	printf("%d\n", ft_printf("[%8d]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%8d]\n", INT_MAX));
	printf("%d\n", ft_printf("[%8d]\n", INT_MAX));
	printf("=================================INT=width\n");
	printf("%d\n", printf("[%4i]\n", 12));
	printf("%d\n", ft_printf("[%4i]\n", 12));
	printf("------------------\n");
	printf("%d\n", printf("[%8i]\n", 0));
	printf("%d\n", ft_printf("[%8i]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%8i]\n", INT_MAX));
	printf("%d\n", ft_printf("[%8i]\n", INT_MAX));
	printf("=================================UINT=width\n");
	printf("%d\n", printf("xxx[%1u]\n", 120));
	printf("%d\n", ft_printf("xxx[%1u]\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("[%5u]\n", 0));
	printf("%d\n", ft_printf("[%5u]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%20u]\n", UINT_MAX));
	printf("%d\n", ft_printf("[%20u]\n", UINT_MAX));
	printf("=================================hex=width\n");
	printf("%d\n", printf("xxx[%1x]\n", 120));
	printf("%d\n", ft_printf("xxx[%1x]\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("[%5x]\n", 0));
	printf("%d\n", ft_printf("[%5x]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%20x]\n", UINT_MAX));
	printf("%d\n", ft_printf("[%20x]\n", UINT_MAX));
	printf("=================================HEX=width\n");
	printf("%d\n", printf("XXX[%1X]\n", 120));
	printf("%d\n", ft_printf("XXX[%1X]\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("[%5X]\n", 0));
	printf("%d\n", ft_printf("[%5X]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%20X]\n", UINT_MAX));
	printf("%d\n", ft_printf("[%20X]\n", UINT_MAX));
	printf("=================================PERCENT=width\n");
	printf("%d\n", printf("[%2%]\n"));
	printf("%d\n", ft_printf("[%2%]\n"));
	printf("------------------\n");
	printf("%d\n", printf("[%1%]\n"));
	printf("%d\n", ft_printf("[%1%]\n"));
	printf("=================================STR=precision\n");
	printf("%d\n", printf("[%.4s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%.4s]\n", "abcdefg"));
	printf("------------------\n");
	printf("%d\n", printf("[%.8s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%.8s]\n", "abcdefg"));
	printf("------------------\n");
	printf("%d\n", printf("[%.8s]\n", s));
	printf("%d\n", ft_printf("[%.8s]\n", s));
	printf("------------------\n");
	printf("%d\n", printf("[%.0s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%.0s]\n", "abcdefg"));
	printf("------------------\n");
	printf("%d\n", printf("[%.s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%.s]\n", "abcdefg"));
	printf("=================================DEC=precision\n");
	printf("%d\n", printf("[%.4d]\n", 12));
	printf("%d\n", ft_printf("[%.4d]\n", 12));
	printf("------------------\n");
	printf("%d\n", printf("[%.8d]\n", 0));
	printf("%d\n", ft_printf("[%.8d]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%.8d]\n", INT_MAX));
	printf("%d\n", ft_printf("[%.8d]\n", INT_MAX));
	printf("------------------\n");
	printf("%d\n", printf("[%.d]\n", 120));
	printf("%d\n", ft_printf("[%.d]\n", 120));
	printf("=================================INT=precision\n");
	printf("%d\n", printf("[%.4i]\n", 12));
	printf("%d\n", ft_printf("[%.4i]\n", 12));
	printf("------------------\n");
	printf("%d\n", printf("[%.8i]\n", 0));
	printf("%d\n", ft_printf("[%.8i]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%.8i]\n", INT_MAX));
	printf("%d\n", ft_printf("[%.8i]\n", INT_MAX));
	printf("------------------\n");
	printf("%d\n", printf("[%.i]\n", 120));
	printf("%d\n", ft_printf("[%.i]\n", 120));
	printf("=================================UINT=precision\n");
	printf("%d\n", printf("xxx[%.1u]\n", 120));
	printf("%d\n", ft_printf("xxx[%.1u]\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("[%.5u]\n", 0));
	printf("%d\n", ft_printf("[%.5u]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%.20u]\n", UINT_MAX));
	printf("%d\n", ft_printf("[%.20u]\n", UINT_MAX));
	printf("------------------\n");
	printf("%d\n", printf("xxx[%.u]\n", 120));
	printf("%d\n", ft_printf("xxx[%.u]\n", 120));
	printf("=================================hex=precision\n");
	printf("%d\n", printf("xxx[%.1x]\n", 120));
	printf("%d\n", ft_printf("xxx[%.1x]\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("[%.5x]\n", 0));
	printf("%d\n", ft_printf("[%.5x]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%.20x]\n", UINT_MAX));
	printf("%d\n", ft_printf("[%.20x]\n", UINT_MAX));
	printf("------------------\n");
	printf("%d\n", printf("xxx[%.x]\n", 120));
	printf("%d\n", ft_printf("xxx[%.x]\n", 120));
	printf("=================================HEX=precision\n");
	printf("%d\n", printf("XXX[%.1X]\n", 120));
	printf("%d\n", ft_printf("XXX[%.1X]\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("[%.5X]\n", 0));
	printf("%d\n", ft_printf("[%.5X]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%.20X]\n", UINT_MAX));
	printf("%d\n", ft_printf("[%.20X]\n", UINT_MAX));
	printf("------------------\n");
	printf("%d\n", printf("XXX[%.X]\n", 120));
	printf("%d\n", ft_printf("XXX[%.X]\n", 120));
	printf("=================================PERCENT=precision\n");
	printf("%d\n", printf("[%.2%]\n"));
	printf("%d\n", ft_printf("[%.2%]\n"));
	printf("------------------\n");
	printf("%d\n", printf("[%.%]\n"));
	printf("%d\n", ft_printf("[%.%]\n"));
	printf("=================================STR=w * p\n");
	printf("%d\n", printf("[%3.4s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%3.4s]\n", "abcdefg"));
	printf("------------------\n");
	printf("%d\n", printf("[%10.4s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%10.4s]\n", "abcdefg"));
	printf("------------------\n");
	printf("%d\n", printf("[%10.8s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%10.8s]\n", "abcdefg"));
	printf("------------------\n");
	printf("%d\n", printf("[%10.8s]\n", s));
	printf("%d\n", ft_printf("[%10.8s]\n", s));
	printf("------------------\n");
	printf("%d\n", printf("[%3.s]\n", "abcdefg"));
	printf("%d\n", ft_printf("[%3.s]\n", "abcdefg"));
	printf("=================================DEC=w * p\n");
	printf("%d\n", printf("[%2.4d]\n", 12));
	printf("%d\n", ft_printf("[%2.4d]\n", 12));
	printf("------------------\n");
	printf("%d\n", printf("[%5.4d]\n", 12));
	printf("%d\n", ft_printf("[%5.4d]\n", 12));
	printf("------------------\n");
	printf("%d\n", printf("[%10.8d]\n", 0));
	printf("%d\n", ft_printf("[%10.8d]\n", 0));
	printf("------------------\n");
	printf("%d\n", printf("[%3.8d]\n", INT_MAX));
	printf("%d\n", ft_printf("[%3.8d]\n", INT_MAX));
	printf("------------------\n");
	printf("%d\n", printf("[%5.d]\n", 120));
	printf("%d\n", ft_printf("[%5.d]\n", 120));
	printf("------------------\n");
	printf("%d\n", printf("[%2.d]\n", 120));
	printf("%d\n", ft_printf("[%2.d]\n", 120));
	return (0);
}
