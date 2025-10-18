/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:42:37 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/16 22:34:39 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s_dest;
	const unsigned char	*s_src;

	if (!src || !dest) 
		return ((void *)0);
	s_dest = (unsigned char *)dest; 
	s_src = (const unsigned char *)src; 
	while (n > 0)
	{
		*(s_dest++) = *(s_src++);
		n--;
	}
	return (dest);
}
