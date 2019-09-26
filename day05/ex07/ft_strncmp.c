#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	while (index < n)
	{	
		if ((s1[index] == s1[n]) && (s2[index] == s2[n]))
			return (s1[index] - s2[index]);
		index++;
	}
	if (index == n)
		return (0);
	if (s1[n] != '\0')
		return (s1[n]);
	if (s2[n] != '\0')
		return (-s2[n]);
	return (0);
}
// NOT MAIN NOT INCLUDE
int	main()
{
	char *name[] = {"hello", "helLO WORLD"};
	printf("%i\n", ft_strncmp(name[0], name[1], 4));
	return (0);
}
