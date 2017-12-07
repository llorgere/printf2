#include <stdlib.h>
#include "libftprintf.h"

static char	*ft_st_to_hex_malloc(size_t n, int j)
{
	char	*tab;

	if (!(tab = (char *)malloc(sizeof(*tab) * (j + 1))))
		return (0);
	tab[j] = '\0';
	if (n == 0)
		tab[0] = 48;
	while (n > 0)
	{
		if(n % 16 < 10)
			tab[j - 1] = (n % 16) + '0';
		else
			tab[j - 1] = (n % 16) + 'A' - 10;
		n = n / 16;
		j--;
	}
	return (tab);
}

char		*ft_st_to_hex_up(size_t n)
{
	size_t	i;
	int		j;

	i = n;
	j = 0;
	while (i > 0)
	{
		i = i / 16;
		j++;
	}
	return (ft_st_to_hex_malloc(n, j));
}