#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*prev;
	t_list	*new;

	prev = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&prev, del);
			return (NULL);
		}
		ft_lstadd_back(&prev, new);
		new = new->next;
		lst = lst->next;
	}
	return (prev);
}
