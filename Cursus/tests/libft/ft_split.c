/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonfale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:16:45 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 14:31:08 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s != c && *s)
				s++;
		}
		if (*s == c)
			s++;
	}
	return (cnt);
}

static void	charcount(char const *s, char c, int *count)
{
	int	i;
	int	j;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s != c && *s)
			{
				j++;
				s++;
			}
			count[i] = j;
			i++;
		}
		if (*s == c)
			s++;
	}
}

static void	wordinput(char *s, char c, char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s != c && *s)
			{
				arr[i][j] = *s;
				j++;
				s++;
			}
			arr[i][j] = '\0';
			i++;
		}
		if (*s == c)
			s++;
	}
	arr[i] = 0;
}

static void	memfree(char **arr, int *count, int idx)
{
	if (idx < 0)
	{
		if (arr != NULL)
		{
			free(arr);
			arr = 0;
		}
		if (count != NULL)
		{
			free(count);
			count = 0;
		}
	}
	else
	{
		while (--idx >= 0)
		{
			free(arr[idx]);
			arr[idx] = 0;
		}
		free(arr);
		free(count);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		*count;
	int		i;

	arr = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	count = (int *)malloc(sizeof(int) * (wordcount(s, c)));
	if (arr == NULL || count == NULL)
	{
		memfree(arr, count, -1);
		return (0);
	}
	charcount(s, c, count);
	i = -1;
	while (++i < wordcount(s, c))
	{
		arr[i] = (char *)malloc(sizeof(char) * (count[i] + 1));
		if (arr[i] == NULL)
		{
			memfree(arr, count, i);
			return (0);
		}
	}
	wordinput((char *)s, c, arr);
	free(count);
	return (arr);
}
