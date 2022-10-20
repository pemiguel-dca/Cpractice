#include <unistd.h>

int	startSpaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	checkSpaces(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return 1;
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_epur_str(char *str)
{
	int	i;
	int	length;

	i = startSpaces(str);
	length = ft_strlen(str) - 1;
	while(str[i])
	{
		while (str[i] && checkSpaces(str[i]) == 0)
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i])
			write(1	," ", 1);
		while (str[i] && checkSpaces(str[i]) == 1)
			i++;
	}
}

int	main (int argc, char *argv[])
{
	if (argc == 2)
		ft_epur_str(argv[1]);
	write (1, "\n", 1);
}
