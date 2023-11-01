/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <mael@buchs.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:33:38 by mbuchs            #+#    #+#             */
/*   Updated: 2023/11/01 15:06:33 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*actual;

	actual = lst -> next;
	while (actual -> next != NULL)
	{
		actual = actual -> next;
		i++;
	}
	return (i);
}
