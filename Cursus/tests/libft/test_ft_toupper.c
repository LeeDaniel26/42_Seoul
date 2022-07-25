#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("a -> %d\n", toupper('a'));
	printf("A -> %d\n", toupper('A'));
	printf("& -> %d\n", toupper('&'));
	printf("space -> %d\n", toupper(' '));
}
