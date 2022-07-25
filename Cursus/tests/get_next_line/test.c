#include <stdio.h>

void ft_count()
{
	static int i = 0;

	int num = 5;
	while(num--)
		i++;
	printf("%d\n", i);
}

int main()
{
	for(int i=0; i<3; i++)
		ft_count();
}
