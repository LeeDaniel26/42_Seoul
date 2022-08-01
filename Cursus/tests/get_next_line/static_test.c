/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   static_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeonfale <yeonjale@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:15:53 by yeonfale          #+#    #+#             */
/*   Updated: 2022/07/29 13:16:32 by yeonfale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_count()
{
	static int i = 0;
	i++;
	return i;
}

int main()
{
	int idx;

	idx = ft_count();
	printf("%d\n", idx);
	idx = ft_count();
	printf("%d\n", idx);
}
