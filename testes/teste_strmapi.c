/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strmapi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:37:27 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:37:40 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	to_upper_index(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

char	shift_by_index(unsigned int i, char c)
{
    return (c + i);
}

int main(void)
{
    char *str = "hello world";
    char *result;

    printf("String original: '%s'\n", str);
    
    result = ft_strmapi(str, to_upper_index);
    if (!result)
    {
        printf("Erro ao alocar memoria!\n");
        return (1);
    }
    printf("Maiusculas: '%s'\n", result);
    free(result);
    
    result = ft_strmapi("abc", shift_by_index);
    printf("Shift por indice 'abc': '%s'\n", result);
    free(result);
    
    return (0);
}
