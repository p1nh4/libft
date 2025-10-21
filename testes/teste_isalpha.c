/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_isalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 18:06:13 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/15 22:20:56 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "teste_functions.h"
#include <unistd.h> 

int	teste_isalpha (void)
{	
	int	i;
	int	flag;
	char 	c[] = {'Q', 'q', '+', '\0'};
	
	i = 0;  
	while (i < 4)
	{	
		flag = ft_isalpha(c[i]);
		if (flag != 0)
			write(1, "isalpha\n", 8); 
		else 
			write(1, "No\n", 3);
		i++;
	} 
	return (0);
}
