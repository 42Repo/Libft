/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:24:57 by asuc              #+#    #+#             */
/*   Updated: 2023/10/30 20:48:18 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	int	i;

	i = 0;
	while (size)
	{
		if (((char *)memoryBlock)[i] == searchedChar)
			return ((void *)(memoryBlock + i));
		size--;
		i++;
	}
	return (NULL);
}
