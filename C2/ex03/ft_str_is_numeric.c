/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:29:06 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/29 10:21:13 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] >= '0' && str[n] <= '9')
	{
		n ++;
	}
	if (str[n] == '\0')
	{
		return (1);
	}
	return (0);
}
