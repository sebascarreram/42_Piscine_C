#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] = 90 + str[index] - 122;
		index++;
	}
	return (str);
}

int	main(int argc, char **argv)
{	
	if (argc != 2)
		return (0);
	else
		printf("%s\n", ft_strupcase(argv[1]));
	return (0);
}
