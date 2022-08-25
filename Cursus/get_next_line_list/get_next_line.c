
#include "get_next_line.h"
#include "get_next_line_utils.c"

char *get_next_line(int fd)
{
	char			buf[BUFFER_SIZE];
	char			*line;
	static t_list	*backup;
	t_list			*current;
	int				i;
	int				flag;

	current = backup;
	i = 0;
	if (current == NULL)
		flag = backupcat(fd, buf, backup);
	while (flag > 0)
	{
		if (i == BUFFER_SIZE)
		{
			backupcat(fd, buf, backup);
			current = current->next;
			i = 0;
		}
		if ((current->content)[i] == '\n')
		{
			while (current->next)
			{
				line = ft_strjoin(line, ft_substr(current->content, 0, BUFFER_SIZE - 1));
				current = current->next;
			}
			line = ft_strjoin(line, ft_substr(current->content, 0, i));
			ft_bzero(current->content, i + 1);
			pullfront(current, buf, i);
			ft_free(backup);
			return (line);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <fcntl.h>

int main()
{
	char *line;
	int fd = open("gnl.txt", O_RDONLY);

	while ((line = get_next_line(fd)))
		printf("%s\n", line);
}
