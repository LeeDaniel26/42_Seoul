#include <stdio.h>
#include "libft.h"

#include "ft_lstnew.c"
#include "ft_lstadd_front.c"
#include "ft_lstsize.c"
#include "ft_lstlast.c"
#include "ft_lstdelone.c"

//#include "ft_substr.c"
//#include "ft_strjoin.c"
//#include "ft_strtrim.c"
//#include "ft_split.c"
//#include "ft_itoa.c"
//#include "ft_putstr_fd.c"

//#include "libft/ft_atoi.c"
//#include "ft_strnstr.c"
//#include "ft_strchr.c"
//#include "ft_strrchr.c"
//#include "libft/ft_strlcpy.c"
//#include "libft/ft_strncat.c"
//#include "libft/ft_strdup.c"
//#include "libft/ft_strlen.c"

//#include "libft/ft_memchr.c"
//#include "libft/ft_memcmp.c"
//#include "libft/ft_memmove.c"
//#include "libft/ft_memset.c"
//#include "libft/ft_bzero.c"
//#include "libft/ft_memcpy.c"

//#include "ft_calloc.c"

static void del(void *content)
{
	free(content);
	content = 0;
}

int main()
{

	printf(">> LinkedList Test\n");
	t_list *head = NULL;
	int data[] = {1, 2};

	ft_lstadd_front(&head, ft_lstnew(data+1));
	ft_lstadd_front(&head, ft_lstnew(data));

	t_list *tmp = head->next;
	ft_lstdelone(head->next, del);
	
	int *value = (int *)tmp->next->content;
	printf("%d\n", *value);

/*
	printf(">> ft_substr\n");
	char str[] = "0123456789";
	char *s = ft_substr(str, 2, 5);
	for(int i=0; i<6; i++)
		printf("%c", s[i]);
	printf("\n");
	//--------------------------------------
*/
/*
	printf(">> ft_strjoin\n");
	char s1[] = "Hello";
	char s2[] = "World";
	printf("%s\n", ft_strjoin(s1, s2));
	//-------------------------------
*/
/*
	printf(">> ft_strtrim\n");
	char set[] = "12345";
	char s1[] = "1Hello3";
	char s2[] = "2Hello";
	char s3[] = "Hello4";
	printf("%s\n", ft_strtrim(s1, set));
	printf("%s\n", ft_strtrim(s2, set));
	printf("%s\n", ft_strtrim(s3, set));
	//-------------------------------
*/
/*
	printf(">> ft_split\n");
	char s[] = "Hello-World-Greatest-Cursus";
	char **arr = ft_split(s, '-');
	while(*arr)
		printf("%s\n", *arr++);
	//-------------------------------
*/
/*
	printf(">> ft_itoa\n");
	int n1 = 532;
	int n2 = 200;
	int n3 = -230;
	int n4 = -2147483648;
	printf("%s\n", ft_itoa(n1));
	printf("%s\n", ft_itoa(n2));
	printf("%s\n", ft_itoa(n3));
	printf("%s\n", ft_itoa(n4));
	//-------------------------------
*/
/*
	printf(">> ft_putstr_fd\n");
	char s[] = "HelloCursus";
	ft_putstr_fd(s, 1);
	//-------------------------------
*/
/*
	printf(">> ft_atoi\n");
	char str[] = "  $ -2147483648";
	printf("%d\n", ft_atoi(str));
	//-------------------------------
*/
/*
	printf(">> ft_strnstr\n");
	char needle1[] = "HA";
	char needle2[] = "";
    char str[] = "aaaaHAaaaa";
    printf("%s\n", ft_strnstr(str, needle1, 10));
    printf("%s\n", ft_strnstr(str, needle2, 10));
	//------------------------------
*/
/*
	printf(">> ft_strchr\n");
	char c = '-';
	char str[] = "Hello";
	printf("%s\n", ft_strrchr(str, c));
	//------------------------------
*/
/*
	printf(">> ft_strlcpy\n");
	char src[] = "World";
	char dst[] = "Hello";
	ft_strlcpy(dst, src, 5);
	printf("%s\n", dst);
	/----------------------------
*/

/*
	printf(">> ft_strncat\n");
	char src[] = "HelloWorld";
	char dst[10];
	printf("%s\n", ft_strncat(dst, src, 10));
	//---------------------------------------------
*/
/*
	printf(">> ft_strdup\n");
	char src[] = "HelloWorld";
	char *tmp = ft_strdup(src);
	printf("%s\n", tmp);
	//-------------------------------
*/
/*
	printf(">> ft_strlen\n");
	char src[] = "HelloWorld";
	printf("%lu\n", ft_strlen(src));
	//-------------------------------------
*/
/*
	printf(">> ft_memchr\n");
	char src[] = "aaaaxaaaaX";
    char *target = ft_memchr(src, 'X', 5);
    printf("%p\n", target);
    target = ft_memchr(src, 'X', 10);
    printf("%p\n", target);
	//-------------------------------------
*/
/*
	printf(">> ft_memcmp\n");
	char src[] = "aaad";
	char dst[] = "aaab";
	printf("%d\n", ft_memcmp(dst, src, 10));
	//-------------------------------------
*/
/*
	printf(">> ft_memset\n");
	char srcChar[] = "HelloWorld";
	printf("%s\n", ft_memset(srcChar, '$', 4));

	int srcInt[] = {1, 2, 3, 4, 5};
	ft_memset(srcInt, 7, 12);
	for(int i=0; i<5; i++)
		printf("%d ", srcInt[i]);
	//------------------------------------
*/
/*
	printf(">> ft_bzero\n");
	char srcChar[] = "HelloWorld";
	ft_bzero(srcChar, 5);
	printf("%s\n", srcChar);

	int srcInt[] = {1, 2, 3, 4, 5};
	ft_bzero(srcInt, 12);
	for(int i=0; i<5; i++)
		printf("%d ", srcInt[i]);
	//-------------------------------
*/
/*
	printf("\n\n>> ft_memcpy\n");
	char srcChar[] = "HelloWorld";
	char dstChar[20];
	printf("%s\n", ft_memcpy(dstChar, srcChar, 5));
	
	int srcInt[] = {1, 2, 3, 4, 5};
	int dstInt[20];
	for(int i=0; i<20; i++)
		dstInt[i] = 0;
	ft_memcpy(dstInt, srcInt, 12);
	for(int i=0; i<5; i++)
		printf("%d", dstInt[i]);
	//--------------------------------	
*/
	
	
	
	return 0;

}
