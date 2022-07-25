#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char srcChar[] = "HelloWorld";
	char *dstChar = "";
	
	printf("%s\n", (char *)memcpy(dstChar+4, dstChar, 0));
	for(int i=0; i<10; i++)
		printf("%d ", dstChar[i]);
	/*
	int srcInt[] = {1, 2, 3, 4, 5};
	int dstInt[20];
	memmove(dstInt, srcInt, 12);
	for(int i=0; i<5; i++
		printf("%d ", dstInt[i]);
	*/
}
