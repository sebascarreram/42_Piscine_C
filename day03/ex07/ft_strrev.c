#include <stdio.h>
#include <unistd.h>

char 	*ft_strrev(char *str)
{
	int index;
	int leng;
	char temp;
	
	leng = 0;
	while (str[++leng])
		;
	index = -1;
	while (++index < --leng)
	{
		temp = str[index];
		str[index] = str[leng];
		str[leng] = temp;
	}	
	return (str);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		printf("%s\n", ft_strrev(argv[1]));
	return (0);
}
