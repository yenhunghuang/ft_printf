#include "../includes/ft_printf.h"
#include <stdio.h>

int				main(void)
{

	for (int i = 0; i < 5; i++)
		printf("%d", i);
	
	printf("\n**********");
	ft_printf("%s, %s!\n", "Hello", "world");
	return (0);
}
