/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_striteri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:37:49 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:38:03 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	to_upper_at_even(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

void	print_index_char(unsigned int i, char *c)
{
    printf("[%d]: '%c'\n", i, *c);
}

int main(void)
{
    char str[] = "hello world";
    
    printf("String original: '%s'\n", str);
    ft_striteri(str, to_upper_at_even);
    printf("Maiusculas em indices pares: '%s'\n\n", str);
    
    char str2[] = "42";
    printf("Imprimindo cada caractere:\n");
    ft_striteri(str2, print_index_char);
    
    return (0);
}
