#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int index;
	int leng;	

	index = -1;
	leng = -1;
	while (dest[++leng] != '\0')
		;
	while (src[++index] != '\0' && index < nb)
		dest[leng + index] = src[index];
	dest[leng + index] = '\0';
	return (dest);
}

int	main()
{
	char lastname[] = "efghijkl";
	char name [] = "abcd";
	
	printf("%s\n", ft_strncat(name, lastname, 5));
	return (0);
}
