/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_memchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:11:30 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/20 22:11:50 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = "Tutorialspoint.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   ret = memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}
