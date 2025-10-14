/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_memset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:08:17 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/14 17:02:04 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h> 

int teste_memset(void)
{
   char s[50];

   strcpy(s, "----- Welcome to 42 ----");
   write(1, s, ft_strlen(s));
   write(1, "\n", 1);

   ft_memset(s, '#', 5);
   write(1, s, ft_strlen(s));
   write(1, "\n", 1);
   //puts(s);

   int	i;
   char x[15];
   
   i = 0; 
   ft_memset(x, 35, 6); // #
   ft_memset(x + 6, '4', 1);  
   ft_memset(x + 7, '2', 1);
   ft_memset(x + 8, 42, 6); // *  
   ft_memset(x + 14, '0', 1);
   while (i < 15)
   {
	   write(1, &x[i], 1);
	   i++;
   }	
   return(0);
}
