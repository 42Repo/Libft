/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:25:39 by mbuchs            #+#    #+#             */
/*   Updated: 2023/09/26 01:34:11 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	i = start;
	tab = malloc (len + 1);
	while (i < len + start)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = 0;
	return (&tab[i]);
}
