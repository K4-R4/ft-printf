#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char *s1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char *s2 = "AAAAAAAAAAAAAAAAAAAAAAAAAAA";
	int d = 123456;
	printf("%s%d%s\n", s1, d, s2);
	ft_printf("%s%d%s\n", s1, d, s2);
	printf("%d\n", d);
	ft_printf("%d\n", d);
	return 0;
}