#include <string.h>
#include <stdio.h>
//char	*strnstr(const char *big, const char *little, size_t len)

int main()
{
	char *big = "il pagliaio con l'ago eehehhe";
	char *little = "ago";
	printf("%s",strstr(big,little));
}
