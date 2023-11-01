/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <mael@buchs.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:28:48 by asuc              #+#    #+#             */
/*   Updated: 2023/11/01 18:34:55 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static	char* neg_nbr(unsigned int n, int len)
{
	char	*str;

	str = ft_calloc((len + 2), sizeof(char));
		if(str == NULL)
		return (NULL);
	str[0] = '-';
	len--;
	while (len > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_numlen(n);
	if (n < 0)
	{
		str = ft_calloc((len + 2), sizeof(char));
			if(str == NULL)
				return (NULL);
		str = neg_nbr(-n, len);
		return (str);
	}
	str = ft_calloc((len + 2), sizeof(char));
	if(str == NULL)
		return (NULL);
	len--;
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str);
}