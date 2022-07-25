/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonfale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:51:49 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 11:20:40 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	int		j;

	if (!ft_strlen(s1))
		return (ft_substr(s1, 0, 1));
	start = 0;
	end = 0;
	i = 0;
	while (check(s1[i++], set))
		start++;
	j = ft_strlen(s1) - 1;
	while (check(s1[j], set))
	{
		if (j < i - 1)
			break ;
		end++;
		j--;
	}
	return (ft_substr(s1, start, ft_strlen(s1) - (start + end)));
}
