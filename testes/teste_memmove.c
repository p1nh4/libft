/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_memmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:53:24 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/18 14:03:13 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int teste_memmove(void)
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
    
    // when overlap happens then it just ignore it
    ft_memmove(first + 8, first, 10);
    printf("memcpy overlap : %s\n ", str);

    // when overlap it start from first position
    ft_memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);

    return 0;
}/*
int	teste_memmove(void)
{
    char str[100] = "AprenderEBom";
    char *first, *second;
    first = str;
    second = str;
    printf("string original: %s\n", str);

   	ft_memcpy(first + 8, first, 10);
    printf("memcpy sobreposicao: %s\n", str);

    ft_memmove(second + 8, first, 10);
    printf("memmove sobreposicao: %s\n", str);

    return 0;
}
*/
