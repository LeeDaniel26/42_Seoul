#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	int	content;
	struct s_list *next;
} t_list;

t_list *ft_lstlast(t_list *list)
{
	t_list *current;
	
	current = list;
	if (current == NULL)
		return (current);
	while (current->next)
		current = current->next;
	return (current);
}

void ft_lstnew(t_list **list, int content)
{
	t_list *new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;

	t_list *lastnode = ft_lstlast(*list);
	if (*list == NULL)
		*list = new;
	else
		lastnode->next = new;
}

int main()
{
	t_list *head = NULL;
	t_list *current;

	current = head;

	for (int i=0; i<1; i++)
	{
		ft_lstnew(&head, i+1);
	}
	/*
	while (head)
	{
		printf("%d ", head->content);
		head = head->next;
	}
	*/
}
