#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	checkWhiteSpaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	j;
	int	k;
	int	atoi;

	i = checkWhiteSpaces(str);
	j = 0;
	k = 0;
	atoi = 0;
	signal = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{	
			signal = signal * - 1;
			j++;
		}
		else if (str[i] == '+')
			k++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && j + k <= 1)
	{
		atoi = atoi * 10 + str[i] - 48;	
		i++;
	}
	return (atoi * signal);
}
/*
int	main(void)
{
	const char	a[] = "   --312as";
	printf("%d", ft_atoi(a));
}
*/
