#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = nb * -1;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb & 10);
	}
	else
		ft_putchar(nb + 48);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main (void)
{
	int	*tab;
	int	i;
	int	len;

	i = 0;
	len = 5;
	tab = malloc(len * sizeof(int)); //without memory allocation the program will not work
	while (i < len)
	{
		tab[i] = i;
		i++;
	}	
	ft_foreach(tab, len, &ft_putnbr);
}
*/
