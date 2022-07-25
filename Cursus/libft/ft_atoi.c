/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:36:31 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/19 09:36:38 by yeonfale         ###   ########.fr       */
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
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		isplus = check(str[i++]);
	if (str[i] < 48 || str[i] > 57)
		return (0);
	val = 0;
	while (str[i] && (str[i] > 47 && str[i] < 58))
	{
		val = val * 10 + str[i] - '0';
		i++;
	}
	if (val == 2147483648)
		res = -2147483648;
	else
		res = val * isplus;
	return (res);
}
