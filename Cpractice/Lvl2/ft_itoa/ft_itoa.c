#include <stdio.h>
#include <stdlib.h>

int	ft_sizeChar(int number)
{
	int	i;
	
	i = 1;
	while (number > 9)
	{
		number = number / 10;
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	length;
	char	temp;

	i = 0;
	length = ft_strlen(str) - 1;
	while (i < length)
	{	
		temp = str[i];
		str[i] = str[length];
		str[length] = temp;
		i++;
		length--;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	char	*itoa;
	int		sizeChar;
	int		i;

	sizeChar = ft_sizeChar(nbr);
	itoa = (char *) malloc(sizeChar * sizeof(char) + 1);
	if (!itoa)
	//	return (0);
	while (i < sizeChar)
	{
		itoa[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i++;
	}
	itoa[i] = '\0';
	return (ft_strrev(itoa));
}

int main(void)
{
	int	number;

	number = 42;
	printf("%s\n", ft_itoa(number));
}
