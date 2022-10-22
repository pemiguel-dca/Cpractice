#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
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
		ft_putnbr(nb % 10);
	}
	else
		 ft_putchar(nb + 48);
}

int     ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	atoi;

	i = 0;
	sign = 1;
	atoi = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + str[i] - 48;
		i++;
	}
	return (atoi * sign);
}

int	checkZero(char *s1, char *nb)
{
	if (*s1 == '/' && (*nb == '0'))
		return (1);
	if (*s1 == '%' && (*nb == '0'))
		return (1);
	return (0);
}

int	checkOperator(char *s1)
{
	if (*s1 == '%'  || *s1 == '*'  || *s1 == '/'  || *s1 == '-'  || *s1 == '+')
		return (0);
	return (1);
}
