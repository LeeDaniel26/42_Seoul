#include <stdio.h>
#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    void *m = malloc(sizeof(void *) * size * count);

    while(count--)
        *m = 0;
    return (m);
}

int	main()
{
	
}
