#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}


void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);	
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	char	**tab;
	int		i;

	i = 0;
	tab = (char **) malloc(4 * sizeof(char *));
	tab[0] = "aba";
	tab[1] = "ca";
	tab[2] = "bab";
	ft_sort_string_tab(tab);
	while (i < 3)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
*/
