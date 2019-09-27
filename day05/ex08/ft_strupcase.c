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

int	main()
{	
	char name[] = "seBas";
	printf("%s\n", ft_strupcase(name));
	return (0);
}
