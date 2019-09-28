#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int index;
	int leng;
	
	index = -1;
	leng = -1;
	while (dest[++leng] != '\0')
		;
	while (src[++index] != '\0')
		dest[leng + index] = src[index];
	dest[leng + index] = '\0';
	return (dest);
}

int	main()
{
	char name[] = "sebastian";
	char lastname[] = "carrera ";

	printf("%s\n", ft_strcat(lastname, name));
	return (0);
}
