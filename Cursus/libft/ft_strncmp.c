/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:34:58 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/20 09:30:03 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1tmp;
	unsigned char	*s2tmp;

	s1tmp = (unsigned char *)s1;
	s2tmp = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1tmp[i] != s2tmp[i])
			return (s1tmp[i] - s2tmp[i]);
		if (s1tmp[i] == '\0' || s2tmp[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
