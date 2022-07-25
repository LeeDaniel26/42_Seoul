/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:33:15 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/20 09:23:48 by yeonfale         ###   ########.fr       */
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
		return (size + ft_strlen(src));
	while (i + 1 < size)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break ;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) - j + ft_strlen(src));
}
