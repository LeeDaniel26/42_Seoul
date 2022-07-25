/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonjale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:05:12 by yeonjale          #+#    #+#             */
/*   Updated: 2022/07/07 10:50:08 by yeonjale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, void *src, size_t n)
{

	int	cnt;
	int	i;
	if (n % sizeof(src[0]) != 0)
		cnt = n / sizeof(src[0]) + 1;
	else
		cnt = n / sizeof(src[0]);
	i = 0;
	while (cnt != 0)
	{
		dst[i] = src[i];
		cnt--;
		i++;
	}
	return (dst);
}
