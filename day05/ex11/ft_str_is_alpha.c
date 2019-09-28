#include <stdio.h>

int	isalpha(int alpha)
{
	if ((alpha >= 65 && alpha <= 90) || (alpha >= 97 && alpha <= 122))
		return (1);
	else
		return (0);
}

int 	ft_str_is_alpha(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (isalpha(str[index]))
			index++;	
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char random[] = "SSAs5F";
	printf("%i\n", ft_str_is_alpha(random));
	return (0);
}

