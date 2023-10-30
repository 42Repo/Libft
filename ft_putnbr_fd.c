/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:34:53 by mbuchs            #+#    #+#             */
/*   Updated: 2023/09/26 19:07:21 by asuc             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int	to_print;

	if (nb == -2147483648)
	{
		write(fd, ("-2147483648"), 11);
	}
	else
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = nb - nb - nb;
			ft_putnbr_fd(nb, fd);
		}
		else if (nb >= 0)
		{
			to_print = (nb % 10) + '0';
			if (nb / 10 != 0)
			{
				ft_putnbr_fd(nb / 10, fd);
			}
			write(fd, &to_print, 1);
		}
	}
}
