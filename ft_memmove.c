/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:40:48 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/15 22:51:09 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(char *dest, const char *src, int n)
{
	int	i;
	
	if (src > dest)
	{
		ft_memcpy(dest, src, n);	
	}
	else
	{
		i = n - 1;
		while (i > 0)
		{
			dest[i] = src[i];
			i--; 
		}
	}
	return (0);
} 
