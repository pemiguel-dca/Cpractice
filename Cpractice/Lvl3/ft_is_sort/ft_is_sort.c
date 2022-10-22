#include <stdio.h>
#include <stdlib.h>

int	checkSort(int a, int b)
{
	if (a < b)
		return (a - b);
	else if (a >= b)
		return (a - b);

}

int     ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i + 1], tab[i]) >= 0)
			length--;
		i++;
	}
	if (length == 1)
		return (1);
	return (0);
}

/*
int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 9};
	int	*tab;

	tab = (int *) malloc(5 * sizeof(int));
	tab = arr;
	printf("%d", ft_is_sort(tab, 5, &checkSort));
}
*/
