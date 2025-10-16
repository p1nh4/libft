/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_isascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:34:02 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/15 22:21:17 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	teste_isascii(void)
{
    int i;
	char the_chars[] = {'A', 0x80, 'Z', '+', 0x81, '\0'};
	
	i = 0; 
	while(i < 6) 
	{
        if(ft_isascii(the_chars[i])) 
			 write(1, "ASCII character\n", 16);
        else 
			write(1, "No\n", 3);
		i++;
    }
    return (0);
}
