#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int index;
	int find;
	//int number;
		
	index = -1;
	if (to_find[0] == '\0')
		return (str);
	while (str[++index] != '\0')
	{
		find = 0; 
		if (str[index] == to_find[find])
			return (&str[index]);
	}
	return (0); 
}

int main()
{
	char name[] = "sebastian";
	char word[] = "as";
	
	printf("%s\n", ft_strstr(name, word));
	return (0);
}
