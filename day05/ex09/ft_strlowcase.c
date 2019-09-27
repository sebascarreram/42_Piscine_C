#include <stdio.h>

char 	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
			str[index] = 122 + str[index] - 90;
		index++;
	}
	return (str);
}

int 	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		printf("%s\n", ft_strlowcase(argv[1]));
	return (0);
}
