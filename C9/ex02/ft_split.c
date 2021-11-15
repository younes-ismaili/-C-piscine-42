/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:01:49 by yismaili          #+#    #+#             */
/*   Updated: 2021/10/14 21:10:16 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	has_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	split_counter(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && !has_char(charset, str[i]))
			i++;
		while (has_char(charset, str[i]))
			i++;
		count++;
	}
	return (count);
}

int	word_counter(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str && !has_char(charset,*str))
	{
		count++;
		str++;
	}
	return (count);
}

char	*create_word(char *str, char *charset, char **word)
{
	int	wcount;
	int	j;

	wcount = word_counter(str, charset);
	*word = malloc(sizeof(char) * (wcount + 1));
	(*word)[wcount] = 0;
	j = 0;
	while (j < wcount)
		(*word)[j++] = *str++;
	while (has_char(charset, *str))
		str++;
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		spcount;
	int		i;

	while (has_char(charset, *str))
		str++;
	spcount = split_counter(str, charset);
	result = malloc(sizeof(char *) * (spcount + 1));
	if (!result)
		return (0);
	result[spcount] = 0;
	i = 0;
	while (i < spcount)
	{
		str = create_word(str, charset, result + i);
		i++;
	}
	return (result);
}