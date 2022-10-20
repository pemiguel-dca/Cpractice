#include <unistd.h>

int	checkDoubles(char *str, char c)
{
	int 	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	checkDoublesPos(char *str, char c, int pos)
{
	int     i;

        i = 0;
        while (i < pos)
        {
                if (str[i] == c)
                        return (1);
                i++;
        }
        return (0);

}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	if (argc == 3)
	{
		j = 0;
		while (argv[1][j])
		{
			if (checkDoublesPos(argv[1], argv[1][j], j) == 0)
				write(1, &argv[1][j], 1);
			j++;
		}
		i = 0;
		while (argv[2][i])
		{
			if ((checkDoublesPos(argv[2], argv[2][i], i) == 0)
					&& (checkDoubles(argv[1], argv[2][i]) == 0))
				write(1, &argv[2][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
}
