/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:05:36 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/20 21:43:49 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;

	if (!s)
		return ((void *) 0);
	ptr_s = (unsigned char *)s;
	while (n--)
	{
		if (*ptr_s++ == (char )c)
			return ((char *)(ptr_s - 1));
	}
	if (*ptr_s == (char )c)
		return ((char *)(ptr_s - 1));
	return ((void *)0);
}
