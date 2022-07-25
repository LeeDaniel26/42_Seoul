/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:32:35 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 11:34:02 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dsttmp;
	unsigned char	*srctmp;

	if (dst == NULL && src == NULL)
		return (0);
	dsttmp = (unsigned char *)dst;
	srctmp = (unsigned char *)src;
	while (n--)
		*dsttmp++ = *srctmp++;
	return (dst);
}
