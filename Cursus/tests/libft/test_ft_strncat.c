#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "HelloWorld";
	char dst[10];

	printf("%s\n", strncat(dst, src, 9));
}
