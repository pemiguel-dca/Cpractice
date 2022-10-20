#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	char	rev;
	int	j;

	j = 0;
	i = ft_strlen(str) - 1;
	while (j < i)
	{
		rev = str[j];
		str[j] = str[i];
	       	str[i] = rev;	
		i--;
		j++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s1[] = "OLLA";
	printf("%s" ,ft_strrev(s1));
}
*/
