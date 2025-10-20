/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:22:21 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/20 20:22:37 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    // define a string
    const char* str = "GeeksforGeeks";
    // define a char ch to be searched in str
    char ch = 's';

    // Use strchr to find the first occurrence of the
    // character 's'
    const char* result = strchr(str, ch);

    if (result != NULL) {
        // Calculate the position by subtracting the base
        // pointer from the result pointer
        printf("Character '%c' found at position: %ld\n",
               ch, result - str);
    }
    else {
        printf("Character '%c' not found.\n", ch);
    }

    return 0;
}
