/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:19:47 by yismaili          #+#    #+#             */
/*   Updated: 2021/09/25 12:57:22 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	g;
	char	h;

	g = 'a';
	h = 'z';
	while (g <= h)
	{
		write(1, &g, 1);
		++ g;
	}
}
