#include "../ft_printf.h"

int main()
{
	int len;
	#include <stdio.h>
	len = ft_printf("%x", NULL);
	printf(" %d\n", len);
	// len = printf("%x", NULL);
	// printf(" %d\n", len);
	return 0;
}