/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonjale <yeonjale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:02:04 by yeonjale          #+#    #+#             */
/*   Updated: 2022/07/08 17:30:56 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break ;
		i++;
		j++;
	}
	if (nb <= ft_strlen(src))
		dest[i] = '\0';
	return (dest);
}
