#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
	int		dstlen;

	dstlen = strlen(s1) + strlen(s2) + 1;
    str = (char *)malloc(sizeof(char) * dstlen);
    if (str == NULL)
        return (0);
    strlcat(str, (char *)s1, dstlen);
    strlcat(str, (char *)s2, dstlen);
    return (str);
}

int main()
{
	char s1[] = "Hello";
	char s2[] = "World";

	char *str = ft_strjoin(s1, s2);
	printf("%s\n", str);
	for(int i=0; i<15; i++)
		printf("%d ", str[i]);
}
