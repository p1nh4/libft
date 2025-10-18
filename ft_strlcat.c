/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:30:17 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/18 18:08:37 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	len;

	d_len = ft_strlen(d_len);
	s_len = ft_strlen(s_len);
	if (size > d_len)
		len = d_len + s_len;
	else
		len = s_len + size;
	if (size )
	{
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (len);
}
