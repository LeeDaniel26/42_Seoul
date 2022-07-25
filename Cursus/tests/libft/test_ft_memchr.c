#include <stdio.h>
#include <string.h>

int main()
{
	int src[] = {1, 2, 3};
	void *target;

	target = memchr(src, 3, 12);
	printf("%p\n", target);
}
