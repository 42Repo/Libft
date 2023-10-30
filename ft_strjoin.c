/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:43:40 by asuc              #+#    #+#             */
/*   Updated: 2023/10/30 12:14:23 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*array;

	j = 0;
	i = -1;
	array = NULL;
	while (++i < size)
		j += ft_strlen(strs[i]);
	array = malloc((j + ((size) * ft_strlen(sep))) * sizeof(char));
	if (array == NULL)
		return (array);
	*array = 0;
	if (size <= 0)
		return (array);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcat(array, strs[i]);
		if (i + 1 < size)
			ft_strcat(array, sep);
		i++;
	}
	return (array);
}
