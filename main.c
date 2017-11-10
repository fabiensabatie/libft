#include "libft.h"
#include <stdlib.h>

void free_lst(void *v, size_t r)
{
	free(v);
	(void)r;
}

int main(void)
{
	t_list	*begin;
	size_t	v;

	v = 1;
	begin = ft_lstnew(&v, sizeof(void *));
	begin->next = ft_lstnew(&v, sizeof(void *));
	begin->next->next = ft_lstnew(&v, sizeof(void *));
	ft_lstdel(&begin, free_lst);
	return (1);
}
