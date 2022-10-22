#include <stdio.h>
#include <unistd.h>
#include "header.h"

void	ft_res(char *nb1, char *op, char *nb2)
{
	int	actNb1;
	int	actNb2;
	int	res;
		
	actNb1 = ft_atoi(nb1);
	actNb2 = ft_atoi(nb2);
	res = 0;
	if (checkOperator(op) == 1)
	{
		ft_putchar('0');
		return ;
	}
	if (*op == '/' && (checkZero(op, nb2) == 1))
	{
		ft_putstr("Stop : division by zero");
		return ;
	}
	if (*op == '%' && (checkZero(op, nb2) == 1))
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	if (*op == '*')
		res = mult(actNb1, actNb2);
	else if (*op == '-')
                res = dif(actNb1, actNb2);
	else if (*op == '+')
                res = sum(actNb1, actNb2);
	else if (*op == '%')
                res = mod(actNb1, actNb2);
	else if (*op == '/')
                res = div(actNb1, actNb2);	
	ft_putnbr(res);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		ft_res(argv[1], argv[2], argv[3]);
	}
}
