#include <stdio.h>

int	isupper(int nb)
{
	if (nb >= 65 && nb <= 90)
		return (1);
	else
		return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int index;
	
	index = 0;
	if (str[0] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (isupper(str[index]))
			index++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char random[] = "ASDASSID";
	printf("%i\n", ft_str_is_uppercase(random));
	return (0);
}
