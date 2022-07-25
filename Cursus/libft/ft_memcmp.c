/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:35:39 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 11:33:02 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1tmp;
	unsigned char	*s2tmp;

	s1tmp = (unsigned char *)s1;
	s2tmp = (unsigned char *)s2;
	while (n--)
	{
		if (*s1tmp != *s2tmp)
			return (*s1tmp - *s2tmp);
		s1tmp++;
		s2tmp++;
	}
	return (0);
}
