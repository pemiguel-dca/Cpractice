#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
		ft_putchar(*str++);
}

void	putNbr(int nb)
{
	int	i;

	i= 0;
	if (nb < 2147483647)
	{
		if(nb > 9)
			putNbr(nb / 10);	
		ft_putchar(nb % 10 + 48);
	}
}

int	checkWhiteSpaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
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
	while (str[i] >= '0' && str[i] <= '9' && (j + k <= 1))
	{
		atoi = atoi * 10 + str[i] - 48;	
		i++;
	}
	return (atoi * signal);
}

void	tabMult(char *c)
{
	int	i;	
	int	number;

	number = ft_atoi(c);
	i = 1;
	while(i <= 9)
	{
		write(1, &"0123456789"[i], 1);
		ft_putstr(" X ");
		putNbr(number);
		ft_putstr(" = ");
		putNbr(i * number);
		ft_putstr("\n");
		i++;
	}
}
int	main(int argc, char *argv[])
{
	if(argc == 2)
		tabMult(argv[1]);
	write(1, "\n", 1);
}
