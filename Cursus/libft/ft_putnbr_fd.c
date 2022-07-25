/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:46:04 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/15 12:07:58 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	cnt;

	if (n == 0)
		return (1);
	cnt = 0;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

static void	printnbr(long long n, int fd, int i)
{
	char	c;

	if (n < 0)
		n *= -1;
	if (i < 0)
		return ;
	c = n % 10 + '0';
	printnbr(n / 10, fd, --i);
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		write(fd, "-", 1);
	printnbr((long long)n, fd, intlen(n) - 1);
}
