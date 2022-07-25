/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:33:15 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 09:33:20 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (size < i)
		return (ft_strlen(src) + size);
	while (i + 1 < size)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
		{
			dest[i] = '\0';
			break ;
		}
		i++;
		j++;
	}
	if (i == size - 1 && dest[i] != '\0')
		dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src) - j);
}
