#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr (nb / 10);
	write (1, &"0123456789"[nb % 10], 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz");		
		else if (i % 3 == 0)
			ft_putstr("fizz");	
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(i);
		
		i++;
		write(1, "\n", 1);
	}
}
