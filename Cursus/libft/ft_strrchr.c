/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 10:42:19 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/13 15:20:34 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		j;

	i = 0;
	j = -1;
	while (i < ft_strlen(s) + 1)
	{
		if ((char)s[i] == (char)c)
			j = i;
		i++;
	}
	if (j == -1)
		return (0);
	return ((char *)(s + j));
}
