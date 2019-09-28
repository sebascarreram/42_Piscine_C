#include <stdio.h>

int	islower(int nb)
{
	if (nb >= 97 && nb <= 122)
		return (1);
	else
		return (0);
}

int 	ft_str_is_lowercase(char *str)
{
	int index;
	
	index = 0;
	if (str[0] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (islower(str[index]))
			index++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char random[] = "ssdsad";
	printf("%i\n", ft_str_is_lowercase(random));
	return (0);
}
