/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonjale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:13:58 by yeonjale          #+#    #+#             */
/*   Updated: 2022/07/17 09:11:30 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < ft_strlen(s1) + 1)
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
