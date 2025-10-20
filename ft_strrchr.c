/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:09:46 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/20 21:41:35 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (s[i])
	{
		if (s[i] == (char )c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == (char )c)
		return ((char *) &s[i]);
	return ((void *) 0);
}
