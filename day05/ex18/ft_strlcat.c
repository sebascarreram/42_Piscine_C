#include <stdio.h>

unsigned	int ft_strlcat(char *dest, char *src, unsigned int size)
{
		int index;
		unsigned int leng1;
		unsigned int leng2;
	
		index = -1;
		leng1 = -1;
		leng2 = -1;
		while (dest[++leng1] != '\0' && leng1 < size)
			;
		while (src[++leng2] != '\0')
			;
		while (src[++index] != '\0' && (leng1 + index + 1) < size)
			dest[leng1 + index] = src[index];
		if (leng1 < size)
			dest[leng1 + index] = '\0';
		return (index + leng2);
}

int		main()
{
		char dest[] = "This";
		char src[] = "is an ipad";

		printf("%d-", ft_strlcat(dest, src, 6));
		printf("%s\n", dest);
		return (0);
}
