/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:04:54 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/27 20:28:18 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_count_words(char *s);

size_t	ft_count_words(char *s)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (ft_memchr(s, ' ') != ((void *)0))
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{

}
