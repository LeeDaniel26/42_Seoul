/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonjale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:31:28 by yeonjale          #+#    #+#             */
/*   Updated: 2022/07/13 17:56:51 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check(char c)
{	
	if (c == '+')
		return (1);
	else	
		return (-1);
}

int	ft_atoi(const char *str)
{
	int				isplus;
	unsigned int	val;
	int				res;
	int				i;

	i = 0;
	isplus = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		isplus = check(str[i++]);
	if (str[i] < 48 || str[i] > 57)
		return (0);
	val = 0;
	while (str[i])
	{
		val = val * 10 + str[i] - '0';
		i++;
		if (str[i] < 48 || str[i] > 57)
			break;
	}
	if (val == 2147483648)
		res = -2147483648;
	else
		res = val * isplus;
	return (res);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi("  -2147483648"));
	printf("%d\n", ft_atoi("-9    0"));
}
