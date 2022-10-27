#include <stdio.h>
#include <unistd.h>

int	array[10];
int	count = 1;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	checkQueen(int col, int pos)
{
	int	i;

	i = 1;
	while (i <= col - 1)
	{
		if (array[i] == pos)
			return (0);
		else if (ft_abs(array[i] - pos) == ft_abs(i - col))
			return (0);
		i++;
	}
	return (1);
}

void	printSolution()
{
	int	i;

	i = 1;
	while (i <= 10)
	{
		ft_putchar(array[i] + 48);
		i++;
	}
	ft_putchar('\n');
	count++;
}

int	ft_ten_queens_puzzle(void)
{
	ft_putchar('\n');
	return (count - 1); //because count starts at 1
}

void 	addQueen(int col)
{
	int	pos;

	pos = 0;
	while (pos < 10)
	{
		if (checkQueen(col, pos))
		{
			array[col] = pos;
			if (col == 10)	
				printSolution();
			else
			addQueen(col + 1);
		}
		pos++;
	}
}

int	main(void)
{
	addQueen(1);
	printf("The number of solutions is: %d", ft_ten_queens_puzzle());
}
