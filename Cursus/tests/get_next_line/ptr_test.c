#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *buf;

	buf = malloc(sizeof(char) * 11);

	buf[29] = 'a';
}
