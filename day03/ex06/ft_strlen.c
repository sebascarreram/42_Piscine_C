#include <stdio.h>

int ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{	
		index++;
	}
	return (index);
	
}

int	main()
{
	char *name;

	name = "Sebastian";
	printf("%i\n", ft_strlen(name));
	return (0);
}
