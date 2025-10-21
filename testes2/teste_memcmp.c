/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_memcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:22:21 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/20 22:22:25 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main () 
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } 
   else if(ret < 0) {
      printf("str1 is less than str2");
   } 
   else {
      printf("str1 is equal to str2");
   }
   return(0);
}
