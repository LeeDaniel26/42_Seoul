#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 2

int	main()
{
	char buf[BUF_SIZE];
	int fd = open("test.txt", O_RDONLY);
	int idx;
	int i = 0;

	while ((idx = read(fd, buf, BUF_SIZE)) > 0)
	{
		printf("%d c:%d\n", idx, buf[idx-1]);
	}
	printf("%d\n", idx);

	return (0);
}
