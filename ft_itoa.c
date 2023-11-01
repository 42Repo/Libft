/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <mael@buchs.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:28:48 by asuc              #+#    #+#             */
/*   Updated: 2023/11/01 18:21:23 by mbuchs           ###   ########.fr       */
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

static	char* neg_nr(long long int n, int len)
{
	char	*str;

	str = malloc((len + 1) * sizeof(char));
	str[0] = '-';
	len--;
	while (len > 0)
	{
		str[len] = n % 10 + '0';
		printf("%d", len);
		n /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long long int nb;

	nb = n;
	len = ft_numlen(nb);
	if (nb < 0)
	{
		str = malloc((len + 2) * sizeof(char));
		str = neg_nr(-nb, len);
		return (str);
	}
	str = malloc((len +1) * sizeof(char));
	len--;
	while (len >= 0)
	{
		str[len] = nb % 10 + '0';
		printf("%d", len);
		nb /= 10;
		len--;
	}
	return (str);
}
