#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

int main()
{
	char buf[BUF_SIZE];
	size_t idx;

	int fd;
	
	if ((fd = open("test.txt", O_RDONLY)) > 0)
	{
		while (1)
		{
			idx = read(fd, buf, BUF_SIZE);
			if (idx == =1)
				break ;
		}
	}
	else
	{
		return (0);
	}

}
