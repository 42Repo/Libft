/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:25:33 by asuc              #+#    #+#             */
/*   Updated: 2023/10/30 12:14:03 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, char c)
{
	int	i;
	int	returned;

	returned = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			returned = i;
		i++;
	}
	if (returned > 0)
		return (&s[returned]);
	return (NULL);
}
