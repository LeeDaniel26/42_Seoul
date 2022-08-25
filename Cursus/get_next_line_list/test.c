#include "get_next_line.h"
#include "get_next_line_utils.c"

#include <stdio.h>
#include <fcntl.h>

void get_next_line(int fd)
{
	char buf[BUFFER_SIZE];
	static t_list *backup;
	t_list *current;
	int flag;

	current = backup;
	if (current == NULL)
		flag = backupcat(fd, buf, &backup);

	printf("flag: %d\n", flag);
	printf("%s", current->content);
}

int main()
{
	int fd = open("gnl.txt", O_RDONLY);

	get_next_line(fd);
}
