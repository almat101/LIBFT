#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && strncmp(big,little,n) == 0)
			return ((char *)big);
		big++;
		len--;
	 }
	 return (NULL);
}

int main()
{
	char *big = "  prova prova  l'ago nel pagliaio";
	char little[] = "ago";
	printf("%s",ft_strnstr(big,little,29));
}
