#include <stdlib.h>
#include <stdio.h>

int	ft_multTen(int nb)
{
	return (nb * 10);
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*arr;
	
	i = 0;
	arr = (int *) malloc(length * sizeof(int));
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
/*
int	main(void)
{
	int	i;
	int	*tab;
	int	len;

	len = 7;
	i = 0;
	tab = (int *) malloc(len * sizeof(int));
	while (i < len)
	{
		tab[i] = i;
		i++;
	}

	int	*result;

	result = ft_map(tab, len, &ft_multTen);
	i = 0;
	while (i < len)
	{
		printf("%d\n", result[i]);
		i++;
	}
}
*/
