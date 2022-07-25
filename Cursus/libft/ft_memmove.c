/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:22:44 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/20 09:15:28 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	int		loc;

	if ((dest == NULL && src == NULL) || (n < 0))
		return (0);
	else if (dest < src)
	{
		i = -1;
		while ((size_t)++i < n)
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	}
	else
	{
		if (n == 0)
			return (dest);
		loc = (int)n - 1;
		while (loc >= 0)
		{
			((unsigned char *)dest)[loc] = ((unsigned char *)src)[loc];
			loc--;
		}
	}
	return (dest);
}
