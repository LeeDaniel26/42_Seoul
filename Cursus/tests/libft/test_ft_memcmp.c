#include <stdio.h>
#include <string.h>

int main()
{
	int src[] = {2};
	int dst[] = {1};

	printf("%d\n", memcmp(dst, src, 1));
}
