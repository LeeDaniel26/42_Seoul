size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		dstlen;
	int		i;
	int		j;

	dstlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * dstlen);
	if (str == NULL)
		return (0);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
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

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n--)
		*tmp++ = 0;
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

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (current == NULL)
		return (current);
	while (current->next)
		current = current->next;
	return (current);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	if (*lst == NULL)
		*lst = new;
	else
		last->next = new;
}

int	backupcat(int fd, char *buf, t_list *backup)
{
	int	flag;

	flag = read(fd, buf, BUFFER_SIZE);
	ft_lstadd_back(&backup, ft_lstnew(buf));
	(ft_lstlast(backup))->content = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	return (flag);
}

/*	Why use 'while'?
	If buf[BUFFER_SIZE] = "(string) ~ \n\0 ~ (empty)", then we'll need to stop pullfront at '\0'.*/
void	pullfront(t_list *current, char *buf, int i)
{
	int	j;

	j = 0;
	while (buf[i])
		(current->content)[j++] = buf[++i];
}

void	ft_free(t_list *backup)
{
	t_list	*current;
		
	while (backup->next)
	{
		current = backup;
		backup = backup->next;
		current->content = 0;
		free(current);
	}
}

