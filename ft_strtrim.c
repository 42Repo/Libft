/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:25:36 by asuc              #+#    #+#             */
/*   Updated: 2023/11/01 23:20:42 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	get_start(char const *str, char const *set, int end)
{
	int	start;

	start = 0;
	while (is_charset(str[start], (char *)set) == 1 && str[start]
		&& start <= end)
		start++;
	return (start);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	end = ft_strlen((char *)str) - 1;
	start = get_start(str, set, end);
	while (is_charset(str[end], (char *)set) == 1 && end >= start)
		end--;
	if (end - start < 0)
		return (ft_calloc(1, sizeof(char)));
	res = ft_calloc(end - start + 2, sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < end + 1 - start)
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = 0;
	return (res);
}
