#include <stdio.h>
#include <string.h>

int main()
{
	char dst[12] = "HelloWorld";
	char src[] = "01234";

	strlcat(dst, src, 12);
	printf("%d\n", dst[10]);
}
