/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_isdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:53:31 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/13 19:49:08 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include "teste_functions.h"
#include <unistd.h>

int	teste_isdigit(void)
{
	int	i;
	int	c[] = {'1', -5, 'b', '\0'};
	

	i = 0; 
	while (i < 4)
	{
		if (ft_isdigit(c[i]) != 0)
			write (1, "No\n", 3);
		else 
			write (1, "isdigit\n", 8);
		i++;
	}
	return (0);
}
