#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*rev_print(char *str)
{
	int	size;
	int	i;

	size = ft_strlen(str);
	i = size - 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

/*
int	main(void)
{
	char	*res;
	
	rev_print("reve");
	write(1, "\n", 1);
}
*/
