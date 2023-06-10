#include "libftprintf.h"
#include "stdio.h"

int	main(void)
{
	char *hi = 0;
	ft_printf("u:papa%u", -13);
	printf("\n");
	printf("u:papa%u", -13);
	printf("\n");
	ft_printf("%d\n",ft_printf("papa%u\n", -13));
	printf("\n");
	printf("%d\n",printf("papa%u\n", -13));
	printf("\n");
	printf("%d\n",ft_printf("papa%X\n", -1));
	printf("\n");
	printf("%d\n",printf("papa%X\n", -1));
	printf("\n");
	ft_printf("%su\n", hi);
	printf("\n");
	printf("%su\n",hi);
	printf("\n");
	printf("\n%p", (void *)-1);
	ft_printf("\n%p", (void *)-1);
	return (0);
}
