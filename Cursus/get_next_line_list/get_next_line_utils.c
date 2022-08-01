size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, int end)
{
	char	*str;
	int		idx;
	int		size;

	size = end - start + 1;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (0);
	idx = 0;
	while (size--)
		str[idx++] = s[start++];
	str[idx] = '\0';
	return (str);
}

void	backupcat(int fd, char *buf, t_list *backup)
{
	read(fd, buf, BUFFER_SIZE);
	ft_lstadd_back(backup, ft_lstnew(buf));
	(ft_lstlast(backup))->content = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
}
