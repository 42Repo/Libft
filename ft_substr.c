/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:25:39 by asuc              #+#    #+#             */
/*   Updated: 2023/10/31 15:11:04 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>
 #include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;
	int		j;

	if (len == 0 || s[0] == 0)
		return (NULL);
	len -=1;
	j = 0;
	i = start;
	tab = malloc (len + 1);
	while (i < start + len && tab[j] && s[i])
	{
		tab[j] = s[i];
		i++;
		j++;
	}
	if (tab[0] == 0)
		return (NULL);
	tab[i] = 0;
	return (tab);
}
