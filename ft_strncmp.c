/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strncmp.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: asuc <asuc@student.42angouleme.fr>		 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/07/16 21:21:05 by asuc			  #+#	#+#			 */
/*   Updated: 2023/07/17 17:02:00 by asuc			 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - s2[i]);
}
