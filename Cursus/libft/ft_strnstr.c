/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:36:05 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 09:36:07 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (len > ft_strlen(haystack) + 1)
		len = ft_strlen(haystack) + 1;
	i = 0;
	while (i < (int)len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (i + j < (int)len)
			{
				if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
			if (j >= (int)ft_strlen(needle))
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (0);
}
