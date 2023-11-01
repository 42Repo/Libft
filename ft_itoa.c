/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <mael@buchs.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:28:48 by asuc              #+#    #+#             */
/*   Updated: 2023/11/01 17:48:55 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
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
static char *neg_nbr(int n, int len)
{
	char	*str;

	str = malloc((len + 1) * sizeof(char));
	n = -n;
	str[0] = '-';
	len--;
	while (len > 0)
	{
		str[len] = n % 10 + '0';
		printf("%d", len);
		n /= 10;
		len--;
	}
	return(str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_numlen(n);
	if (n > -2147483648)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if(n < 0)
	{
		str = malloc((len + 1) * sizeof(char));
		str = neg_nbr(n, len);
		return (str);
	}
	str = malloc((len) * sizeof(char));
	len--;
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		printf("%d", len);
		n /= 10;
		len--;
	}
	return (str);
}
