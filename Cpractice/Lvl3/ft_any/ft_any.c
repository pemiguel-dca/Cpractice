#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_any(char **tab, int(*f)(char*))
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 0)
			res++;
		i++;
	}
	if (res == i) // if the 'i' strings are empty return 0
		return (0);
	return (1);
}

/*
int	main(void)
{
	char	**tab;

	tab = (char **) malloc(3 * sizeof(char *));
	tab[0] = "s";
	tab[1] = "r";
	tab[2] = NULL;
	printf("%d\n", ft_any(tab, &ft_strlen));
}
*/
