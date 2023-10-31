/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:24:27 by asuc              #+#    #+#             */
/*   Updated: 2023/10/30 21:59:39 by asuc             ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*array;
	int		lenght;

	j = 0;
	i = -1;
	array = NULL;
	lenght = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	array = malloc(lenght * sizeof(char));
	if (array == NULL)
		return (NULL);
	ft_strcat(array, (char *)s1);
	ft_strcat(array, (char *)s2);
	return (array);
}
