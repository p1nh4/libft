/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strcnmcp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:53:01 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/20 20:53:11 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int main () {
   char str1[20];
   char str2[20];
   int result;

   //Assigning the value to the string str1
   strcpy(str1, "hello ");
    //hello wold

   //Assigning the value to the string str2
   strcpy(str2, "hello wold");

   //This will compare the first 3 characters
   result = strncmp(str1, str2, 3);
   // 7 
   // maior a primeira, maior a segunda e igual

   if(result > 0) {
      printf("ASCII value of first unmatched character of str1 is greater than str2");
   } else if(result < 0) {
      printf("ASCII value of first unmatched character of str1 is less than str2");
   } else {
      printf("Both the strings str1 and str2 are equal");
   }

   return 0;
}
