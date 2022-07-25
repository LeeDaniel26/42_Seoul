#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int cnt = 0;

	while(*s++)
		cnt++;
	return (cnt);
}

char    *ft_strchr(const char *s, int c)
{
    size_t  i;
	size_t	size;

    i = 0;
	size = ft_strlen(s);
    while (i < size + 1)
    {
        if ((char)*s == (char)c)
            return ((char *)s);
        s++;
        i++;
    }
    return (0);
}

int main()
{
	char s[] = "abcdefgh";

	//printf("%lu\n", ft_strlen(s));
	printf("%p\n", ft_strchr(s, '\0'));
}
