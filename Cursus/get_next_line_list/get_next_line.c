
#include "get_next_line.h"
#include "get_next_line_utils.c"

char *get_next_line(int fd)
{
	char			*buf[BUFFER_SIZE];
	char			*line;
	int				i;
	int				start;
	static t_list	*backup;
	t_list			*current;
	t_list			*last;

	read(fd, buf, BUFFER_SIZE);
	if (backup = NULL)
		backupcat(fd, buf, backup);
	i = 0;
	last = ft_lstlast(backup);
	while ((last->content)[i])
	{
		last = ft_lstlast(backup);
		if ((last->content)[i] == "\0")
		{
			backupcat(fd, buf, backup);
			i = 0;
		}
		if ((last->content)[i] == '\n')
		{
			line = ft_substr(last->content, 0, i);
			last->content = ft_substr(last->content, i + 1, BUFFER_SIZE - 1);
			return (line);
		}
		i++;
	}
	current = current->next;
}

#include <stdio.h>
#include <fcntl.h>

int main()
{
	char *line;
	int fd = open("gnl.txt", O_RDONLY);
	
	line = get_next_line(fd);
	printf("%s", line);
}



