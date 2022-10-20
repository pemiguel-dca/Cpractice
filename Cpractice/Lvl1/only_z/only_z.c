#include <unistd.h>

int main (int argc, char *arvs[])
{
	if (argc && arvs)
		write(1, "z", 1);
	write(1, "\n", 1);
}
