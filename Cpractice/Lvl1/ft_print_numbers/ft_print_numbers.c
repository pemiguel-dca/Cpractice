#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;
	
	n = '9';
	while (n >='0')
	{
		write(1, &n, 1);
		n--;
	}
}

int main (void)
{
	ft_print_numbers();
}
