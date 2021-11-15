/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 21 :23:17 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/01 21:55:57 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	a;
	int	s;
	int	r;

	a = 0;
	s = 1;
	r = 0;
	while ((str[a] >= '\t' && str[a] <= '\r') || str[a] == ' ')
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			s *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		r = (str[a] - '0') + (r * 10);
		a++;
	}
	return (r * s);
}
