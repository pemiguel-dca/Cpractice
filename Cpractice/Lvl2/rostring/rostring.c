#include <unistd.h>
#include <stdlib.h>

int	sizeSpaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (i);
}

int	checkSpaces(char c)
{
	if (c == 32 || c == 9 || c == 10)
		return (1);
	return (0);
}

void	first_word(char *str)
{
	int	i;

	i = sizeSpaces(str);
	while (checkSpaces(str[i]) == 0)
	{
                write (1, &str[i], 1);
		i++;
	}
}

void	rostring(char *str)
{
	int	i;
	
	i = sizeSpaces(str);
	while (checkSpaces(str[i]) == 0) // skip first word
		i++;
	i++;	
	while (str[i])
	{
		while(checkSpaces(str[i]) == 0)
		{	
			write(1, &str[i], 1);
			i++;
		}
		write(1, " ", 1);
		while(checkSpaces(str[i]) == 1)
			i++;
	}
	first_word(str);
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rostring(argv[1]);
}


