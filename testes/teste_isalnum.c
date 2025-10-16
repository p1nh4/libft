/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_isalnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 20:03:22 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/15 22:20:37 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "teste_functions.h"
#include <unistd.h>

int	teste_isalnum(void)
{
	int	i;
	int	c[] = {1, 'b', -5, 'Q', '+', '\0'};
	
	i = 0;
	while (i < 6)
	{
		if (ft_isalnum(c[i]) != 0)
			write (1, "isalnum\n", 8);
		else
			write (1, "No\n", 3);
		i++;
	}
	return (0);
}
