#include <stdio.h>
#include <stdlib.h>

int     checkSpaces(char c)
{
        if (c == ' ' || c == 9 || c == 10)
                return (1);
        if (c == 0)
                return (1);
        return (0);
}


int	sizeMalloc(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && !checkSpaces(str[i]))
			j++;	
		i++;
	}
	return (j);
}

int	lengthWord(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !checkSpaces(str[i]))
		i++;
	return (i);
}

char	*ft_word(char *str)
{

	int	i;
	char	*word;

	word = (char *) malloc(lengthWord(str) + 1 * sizeof(char));
	i = 0;
	while (i < lengthWord(str))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int	i;
	char	**splited;

	splited = (char **) malloc(sizeMalloc(str) + 1 * sizeof(char *));
	i = 0;
	while (*str)
	{
		while (*str && checkSpaces(*str))
			str++;
		if (*str)
		{
			splited[i] = ft_word(str);
			i++;
		}
		while (*str && !checkSpaces(*str))
			str++;
	}	
	splited[i] = 0;
	return (splited);
}
/*
int	main(void)
{
	char	string[] = "ola bem vindo";
	char	**res;
	int	i;
	
	i = 0;
	res = ft_split(string);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
*/
