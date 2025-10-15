/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_isprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:36:22 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/14 10:43:38 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <unistd.h>

int	teste_isprint(void)
{
	int	i;
	char	c[] = {'1', 'a', 5 , 2, '+', '\0'};

	i = 0;
	while (i < 6)
	{
		if (ft_isprint(c[i]) != 0)
			write(1, "isprint\n", 8);
		else 
			write(1, "No\n", 3);
		i++;
	}
	return (0);
}
