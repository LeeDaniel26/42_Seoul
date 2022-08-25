#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		dstlen;
	int		i;
	int		j;

	dstlen = strlen(s1) + strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * dstlen);
	if (str == NULL)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

int main()
{
	char *str;
	char *cpystr = "HelloWorld";

	str = ft_strjoin(str, cpystr);

	printf("%s\n", str);
	printf("%lu\n", strlen(str));
}
