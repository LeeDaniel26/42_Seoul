/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonfale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:16:45 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 16:12:47 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	memfree(char **arr, int idx)
{
	while (--idx >= 0)
	{
		free(arr[idx]);
		arr[idx] = 0;
	}
	free(arr);
}

static int	wordcount(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (s && *s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s != c && *s)
				s++;
		}
		if (*s == c && c != 0)
			s++;
	}
	return (cnt);
}

static void	charcount(char *s, char c, char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (s && *s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s != c && *s)
			{
				j++;
				s++;
			}
			arr[i] = malloc(sizeof(char) * (j + 1));
			if (!arr[i])
			{
				memfree(arr, i);
				return ;
			}
			i++;
		}
		if (*s == c && c != 0)
			s++;
	}
}

static void	wordinput(char *s, char c, char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (s && *s)
	{
		if (*s != c)
		{
			j = 0;
			while (*s != c && *s)
			{
				arr[i][j++] = *s++;
			}
			arr[i++][j] = '\0';
		}
		if (*s == c && c != 0)
			s++;
	}
	arr[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = (char **)malloc(sizeof(char *) * (wordcount(s, c) + 1));
	if (s == NULL || arr == NULL)
		return (0);
	charcount((char *)s, c, arr);
	wordinput((char *)s, c, arr);
	return (arr);
}
