#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main (int args, char *argv[])
{
	int	i;

	i = args - 1;
	if (args > 1)
	{
		ft_putstr(argv[i]);	
	}
	write (1, "\n", 1);
}
