/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:35:06 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/28 12:27:13 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while ((str[n] >= 'a' && str[n] <= 'z') || (str[n] >= 'A' && str[n] <= 'Z'))
	{
		n ++;
	}
	if (str[n] == '\0')
	{
		return (1);
	}
	return (0);
}	
