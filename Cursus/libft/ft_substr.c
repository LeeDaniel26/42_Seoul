/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:34:58 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 11:20:21 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		idx;
	size_t	size;

	if (len > ft_strlen(s) - start + 1)
		size = ft_strlen(s) - start;
	if (len <= ft_strlen(s) - start + 1)
		size = len;
	if (start >= ft_strlen(s))
		size = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (0);
	idx = 0;
	while (size--)
		str[idx++] = s[start++];
	str[idx] = '\0';
	return (str);
}
