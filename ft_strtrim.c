/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:25:36 by asuc              #+#    #+#             */
/*   Updated: 2023/10/31 17:16:58 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	size_t			i;
// 	unsigned char	*p;

// 	p = s;
// 	i = 0;
// 	if (!s)
// 		return ;
// 	while (i < n)
// 	{
// 		(*p) = 0;
// 		p++;
// 		i++;
// 	}
// }
// void	*calloc(size_t nmemb, size_t size)
// {
// 	void	*tab;

// 	tab = malloc(nmemb * size);
// 	if (!tab)
// 		return (NULL);
// 	ft_bzero(tab, nmemb * size);
// 	return (tab);
// }
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

char	*ft_strtrim(char const *str, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen((char *)str) - 1;
	while (is_charset(str[start], (char *)set) == 1 && str[start]
		&& start <= end)
		start++;
	while (is_charset(str[end], (char *)set) == 1 && end >= start)
		end--;
	res = ft_calloc(end - start + 1, sizeof(char));
	while (i < end + 1 - start)
	{
		res[i] = str[start + i];
		i++;
	}
	return (res);
}
// int main()
// {
//	 printf("%s", ft_strtrim("", ""));
// }
