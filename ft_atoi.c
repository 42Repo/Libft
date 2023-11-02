/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 03:46:50 by asuc              #+#    #+#             */
/*   Updated: 2023/11/02 19:23:01 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// int	ft_isdigit(int c)
// {
// 	if (!(c >= '0' && c <= '9'))
// 		return (0);
// 	return (1);
// }

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while ((str[i] == ' ' && str[i]) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (!(ft_isdigit(str[i])) && !(ft_isdigit(str[i + 1])))
		return (0);
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && (str[i] >= '0' && str [i] <= '9'))
	{
		sum += str[i] - 48;
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			sum *= 10;
		i++;
	}
	sum *= sign;
	return (sum);
}

// int main()
// {
// 	printf("ft_atoi = %d",ft_atoi(""));
// }

