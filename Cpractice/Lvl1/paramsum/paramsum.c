#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	params;

	params = argc - 1 + 48;
	write(1, &params, 1);
	write(1, "\n", 1);
	return (0);
}
