#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newlst;
	t_list	*current;
	t_list	*last;

	current = lst;
	newlst = NULL;
	last = newlst;
	while (current)
	{
		new = ft_lstnew(f(current->content));
		if (new == NULL)
		{
			ft_lstclear(&newlst, del);
			free(new);
			return (0);
		}
		ft_lstadd_back(&last, new);
		last = new;	//last가 가리키는 대상이 newlst -> new로 바뀌는거지, new 자체는 바뀌지 않는다. 즉, while이 다시 돌 때 같은 new가 다시 할당되는 것. => (Change to) new = new->next;
		current = current->next;
	}
	return (newlst);
}
