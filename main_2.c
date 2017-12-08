#include <stdio.h>
#include "libftprintf.h"

int		main()
{
	int 		a;
	long int 	b;
	long long int c;
	int 		d;

	a = 1789;
	b = -2999900;
	c = -989849849452;
	d = 0;

/*	ft_printf("test de a pour d [%-10.6d]\n", a);
	ft_printf("test de a pour o [%o]\n", a);
	ft_printf("test de a pour u [%u]\n", a);
	ft_printf("test de a pour x [%x]\n", a);
	ft_printf("test de a pour X [%X]\n", a);
	ft_printf("test de b pour ld [%ld]\n", b);
	ft_printf("test de b pour lo [%lo]\n", b);
	ft_printf("test de b pour lu [%lu]\n", b);
	ft_printf("test de b pour lx [%lx]\n", b);
	ft_printf("test de b pour lX [%lX]\n", b);
	ft_printf("test de c pour lld [%lld]\n", c);
	ft_printf("test de c pour llo [%llo]\n", c);
	ft_printf("test de c pour llu [%llu]\n", c);
	ft_printf("test de c pour llx [%llx]\n", c);
	ft_printf("test de c pour llX [%llX]\n", c);
	ft_printf("test de a pour d [%d]\n");
	ft_printf("test de a pour o [%o]\n");
	ft_printf("test de a pour u [%u]\n");
	ft_printf("test de a pour x [%x]\n");
	ft_printf("test de a pour X [%X]\n");
	ft_printf("test de a pour d [%d]\n", a, b, c, a, c, b);
	ft_printf("test de a pour o [%o]\n", a, b);
	ft_printf("test de a pour u [%u]\n", a, b);
	ft_printf("test de a pour x [%x]\n", a, b);
	ft_printf("test de a pour X [%X]\n", a, b);
	ft_printf("test de a pour d \n", a);
	ft_printf("test de a pour o \n", a);
	ft_printf("test de a pour u \n", a);
	ft_printf("test de a pour x \n", a);
	ft_printf("test de a pour X \n", a);
	printf("test de a pour x [%#x]\n", d);
	ft_printf("test de a pour x [%#x]\n", d);
	printf("test de a pour x [%#5.x]\n", d);
	ft_printf("test de a pour x [%#5.x]\n", d);
	printf("test de a pour x [%#o]\n", d);
	ft_printf("test de a pour x [%#o]\n", d);
	printf("test de a pour x [%5.o]\n", d);
	ft_printf("test de a pour x [%5.o]\n", d);
	printf("test de a pour x [%#5.o]\n", d);
	ft_printf("test de a pour x [%#5.o]\n", d);
	printf("test de a pour x [%.o]\n", d);
	ft_printf("test de a pour x [%.o]\n", d);
	printf("test de a pour x [%.d]\n", 1);
	ft_printf("test de a pour x [%.d]\n", 1);
	printf("%   %\n", "test");
	ft_printf("%   %\n", "test");
	printf("[%010s]\n", NULL);
	printf("[%010.6s]\n", NULL);
	printf("[%010ls]\n", NULL);
	printf("[%10.5ls]\n", NULL);
*/	printf("[%10c]\n");
	ft_printf("[%10c]\n");
//	ft_printf("[%s]\n", NULL);
//	ft_printf("[%.2c]\n", NULL);
	return (0);
}
