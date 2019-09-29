#include <stdio.h>

unsigned 	int ft_strlcpy(char *dest, char *src, unsigned int size)
{
		int index;
		unsigned int number;

		index = -1;
		number = 0;
		while (src[++index] != '\0')
		{
			if (number++ < size - 1)
				*dest++ = *src;
		}
		if (size > 0)
			dest[index] = '\0';
		return (number);
}

int		main()
{
		char dest[] = "This";
		char src[] = "is an ipad";
	
		printf("%d-", ft_strlcpy(dest, src, 4));
		printf("%s\n", dest);
		return (0);
}
