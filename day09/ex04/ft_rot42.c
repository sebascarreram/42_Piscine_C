#include <stdio.h>

char	*ft_rot42(char *str)
{
	char	*ret;

	ret = str;
	while (*str)
	{
		if ('a' <= *str && *str <= 'z')
			*str = (((*str - 'a' + 42) % 26) + 'a');
		if ('A' <= *str && *str <= 'Z')
			*str = (((*str - 'A' + 42) % 26) + 'A');
		str++;
	}
	return (ret);
}

int main()
{	
	char tab[] = "sebastian";
	printf("%s\n", ft_rot42(tab));
	return (0);
}
