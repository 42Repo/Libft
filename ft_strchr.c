/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:25:20 by asuc              #+#    #+#             */
/*   Updated: 2023/11/03 16:17:34 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&(s[i]));
		i++;
	}
	if (s[i] == c)
		return ((char *)&(s[i]));
	return (NULL);
}
