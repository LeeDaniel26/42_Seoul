#include <stdio.h>
#include <string.h>

int main()
{
	char *to_find = "";
	char str[] = "aaaaHAaaaa";

	printf("%s\n", strnstr(str, to_find, 100));
	printf("%p\n", strnstr(str, to_find, 10));
}
