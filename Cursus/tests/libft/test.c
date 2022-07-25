#include <stdio.h>
#include <unistd.h>

void test(const char *str)
{
	while(*++str)
	{
		printf("%c", *str);
	}
}

int main()
{
	char c = 'a' ;

	write(1, &c, 1);
}
