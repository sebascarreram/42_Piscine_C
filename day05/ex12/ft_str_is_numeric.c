#include <stdio.h>

int	isnumeric(int nb)
{
	if (nb >= 48 && nb <= 57)
		return (1);
	else
		return (0);
}

int ft_str_is_numeric(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (isnumeric(str[index]))
			index++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char random[] = "53455";
	printf("%i\n", ft_str_is_numeric(random));
	return (0);
}
