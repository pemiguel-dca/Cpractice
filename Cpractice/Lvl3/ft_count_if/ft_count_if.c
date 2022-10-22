#include <stdio.h>
#include <stdlib.h>

int	ft_check(char *str)
{
	if (*str == 'r')
		return (0);
	return (1);
}

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (ft_check(tab[i]) == 0)
			length--;
		i++;
	}
	return (length);
}

int	main(void)
{
	char	**tab;
	int	len;

	len = 3;
	tab = (char **) malloc(len * sizeof(char *));
	tab[0] = "s";
	tab[1] = "r";
	tab[2] = NULL;
	printf("%d\n", ft_count_if(tab, len,&ft_check));
}

