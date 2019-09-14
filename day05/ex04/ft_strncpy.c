#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	index = -1;
	while (src[++index] != '\0' && index < n)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}
// NOT INCLUDE NOT MAIN FOR SUBMIT
int main()
{
	char src[] = "sebastian";
	char dest[9];
	int len = 5;

	ft_strncpy(dest, src, len);
	printf("%s\n", dest);
	return (0);
}
