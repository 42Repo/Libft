/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:25:14 by mbuchs            #+#    #+#             */
/*   Updated: 2023/09/26 23:44:11 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*pos;

	pos = s;
	i = 0;
	if (c == 0 || n == 0)
		return (NULL);
	while (i < n)
	{
		(*pos) = c;
		pos++;
		i++;
	}
	return (s);
}
