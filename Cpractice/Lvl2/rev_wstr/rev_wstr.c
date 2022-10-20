#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

int	isWhiteSpace(char c)
{
	if (c == 32 || c == 9|| c == 10)
		return (1);
	return (0);
}

void	printReverse(char *str)
{
	int fast;	
	int slow;	
	int i;	
	
	fast = ft_strlen(str) - 1;
	slow = fast;
	i = fast;

	while (fast >= 0)
	{
		slow = fast;
		i = fast;
	
		while (fast >= 0 && isWhiteSpace(str[fast]) == 0)
			fast--;
		fast++;
		i = fast;
		while (i <= slow)
		{
			write(1, &str[i], 1);
			i++;
		}	
		if (fast > 0)
			write(1, " ", 1);
		fast--;
		fast--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printReverse(argv[1]);
	write(1, "\n", 1);
}
