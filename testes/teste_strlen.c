/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:52:36 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/15 22:23:13 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	teste_strlen(void)
{
	int	i; 
	char *c[] = {"acbd5++-4", "0", "02", "++1-", "\0"};

	i = 0;
	while (i < 4)
	{
		printf("lenght %d = %d\n", i, ft_strlen(c[i]));
		i++;
	}
	return (0);  
}
