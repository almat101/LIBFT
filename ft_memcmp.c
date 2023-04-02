#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n){
	unsigned char	*ps1;
	unsigned char	*ps2;
	
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (n && *ps1 == *ps2)
	{
		ps1++;
		ps2++;
		n--;
	}
	if (n)
		return (*ps1 - *ps2);
	else
		return (0);
}

int main()
{
	char *s1 = "ciad";
	char *s2 = "ciaf";
	printf("%d",ft_memcmp(s1,s2,4));
}
