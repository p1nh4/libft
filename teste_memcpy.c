/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_memcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:45:26 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/14 17:16:40 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdio.h>
#include <unistd.h>

int	teste_memcpy(void)
{
	char src[10] = "42 Porto";
	char dest[10];

//	write (1, "Antes de ft_memcpyi: ", 21);
//	write(1, dest, 10);
	printf("Antes de ft_memcpy: %s\n\n", dest);
//	write(1, "\n\n", 2); 
 
//	write (1, "cpy ate n=4 do src: ", 23);
	ft_memcpy(dest, src, 4);
//	write(1, dest, 10);
//	write(1, "\n\n", 2); 
	printf("copiando ate n=4 do src: %s\n\n", dest);
	
//	write (1, "Cpy tudo do src: ", 20);
	ft_memcpy(dest, src, 8);
//	write(1, dest, 10);
	//write(1, "\n\n", 2); 
	printf("Copiando tudo do src: %s\n\n", dest);
	return (0);
}
