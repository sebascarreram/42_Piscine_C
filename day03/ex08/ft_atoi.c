#include <stdio.h>

int ft_atoi(char *str)
{
	int index;
	int flag;
	int result;
	
	flag = 1;
	index = 0;
	result = 0;
	if (*str == '-')
	{
		index = 1;
		flag = -1;
	}
	while (str[index] != '\0')
	{
		if (*str >= '0' && *str <= '9')
			result = result * 10 + *str - '0';
		str++;
	}
	return (result * flag);
	
}

int main()
{
	char test[] = "123";
	
	printf("%d\n", ft_atoi(test));
	return (0);
}
