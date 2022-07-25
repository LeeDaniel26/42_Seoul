/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 07:57:51 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 09:37:17 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long long num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static void	inttostr(long long num, int i, char *str)
{
	if (i < 0)
		return ;
	if (num < 0)
		num *= -1;
	str[i] = num % 10 + '0';
	inttostr(num / 10, --i, str);
}

char	*ft_itoa(int n)
{
	char		*str;	
	long long	num;
	int			isminus;

	num = (long long)n;
	isminus = 0;
	if (num < 0 && num != 0)
		isminus = 1;
	str = (char *)malloc(sizeof(char) * (intlen(num) + 1 + isminus));
	if (str == NULL)
		return (0);
	inttostr(num, intlen(num) - 1 + isminus, str);
	if (num < 0)
		str[0] = '-';
	str[intlen(n) + isminus] = '\0';
	return (str);
}
