/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:59:21 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/15 22:20:16 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h> 

int	teste_bzero(void)
{
	int	i;
	char s[5] = {'4', '2', 'P', 'T', 'c'};

	i = 0;
	while (i < 5)
	{
		write(1, " [", 2);
		write(1, &s[i], 1);
		write(1, "] ", 2);
		i++;
	}
	
	write(1, "\n\nApagando os dois primeiros zeros do buffer.\n", 46);
	ft_bzero(s, 2);

	i = 0;
	while (i < 5)
	{
		write(1, " [", 2);
		write(1, &s[i], 1);
		write(1, "] ", 2); 
		i++;
	}

	write(1, "\n\nApagando todo o buffer.\n", 27);	
	ft_bzero(s, 5);

	i = 0;
	while (i < 5)
	{
		// usado para escrever no buffer temporario
		if (s[i] == 0)
			write(1, " [0] ", 5);
		else 
		{
			write(1, " [", 2);
			write(1, &s[i], 1);
			write(1, "] ", 2); 
		}	 
		i++;
	}
	//s[i] = '\0';
	return (0);
}
