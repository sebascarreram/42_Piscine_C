#include <stdio.h>

int	isprintable(int nb)
{
	if (nb >= 33 && nb <= 126)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int index;
	
	index = 0;
	if (str[0] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (isprintable(str[index]))
			index++;
		else
			return (0);
	}
	return (1);
}

int	main()
{
	char random[] = "ss_)+_-!34?.,?75";
	printf("%i\n", ft_str_is_printable(random));
	return (0);
}
