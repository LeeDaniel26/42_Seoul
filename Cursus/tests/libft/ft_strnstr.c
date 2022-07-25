#include <stdio.h>
#include <string.h>

int		ft_strlen(const char *s)
{
	int cnt = 0;
	while(*s++)
		cnt++;
	return (cnt);
}

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;

    if (ft_strlen(needle) == 0)
        return ((char *)haystack);
    if (len > ft_strlen(haystack) + 1)
        len = ft_strlen(haystack) + 1;
    i = 0;
    while (i < len)
    {
        if (haystack[i] == needle[0])
        {
            j = 0;
            while (i + j < len)
            {
				if (haystack[i + j] != needle[j])
				{
					printf("break!\n");
					break ;
				}
                j++;
            }
			printf("%d %d %lu\n", i, i + j, len);
            if (j >= ft_strlen(needle))
                return ((char *)(haystack + i));
       }
       i++;
    }
    return (0);
}

int main()
{
	char needle[] = "A";
	char haystack[] = "MZIRIBMZIRIBMZE123";

	printf("%s\n", ft_strnstr(needle, needle, 2));
	printf("%s\n", strnstr(needle, needle, 2));

}
