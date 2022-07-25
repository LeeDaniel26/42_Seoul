#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "Hello";
	char dst[] = "--------------------";

	printf("%lu\n", strlcpy(dst, src, -1));
	int i = 0;
	while(i < 20)
	{
		printf("%d ", dst[i]);
		i++;
	}
}
