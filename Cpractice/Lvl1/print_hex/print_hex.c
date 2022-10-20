#include <unistd.h>

void	ft_hexs(int number, char *base)
{
	if (number > 15)
	{
		ft_hexs(number / 16 , base);
	       	ft_hexs(number % 16, base);	
	}
	else
		write (1, &base[number], 1);
}

int main(int argc, char *argv[])
{
	char	*base;
	int	number = 15;
	base = "0123456789abcdef";
	if (number)
		ft_hexs(number, base);
	write (1, "\n", 1);
	return (0);
}
