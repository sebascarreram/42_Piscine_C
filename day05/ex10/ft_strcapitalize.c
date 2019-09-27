#include <stdio.h>

char 	*ft_strcapitalize(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
			str[index] = 122 + str[index] - 90;
		index++;
	}
	index = 0;
	while (str[index] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = 90 + str[0] - 122;
		if ((str[index] >= 97 && str[index] <= 122) && (str[index - 1] == ' ' || str[index - 1] == 43 || str[index - 1] == 45))
			str[index] = 90 + str[index] - 122;
		index++;
	}
	return (str);
}

int	main()
{
	char name[] = " salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	//char name[] = "sebASC # scs";
	printf("%s\n", name);
	printf("%s\n", ft_strcapitalize(name));
	return (0);
}
