/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:36:58 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:37:17 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *s1 = "Hello ";
    char *s2 = "World!";
    char *result;

    result = ft_strjoin(s1, s2);
    if (!result)
    {
        printf("Erro ao alocar memoria!\n");
        return (1);
    }
    printf("s1: '%s'\n", s1);
    printf("s2: '%s'\n", s2);
    printf("Resultado: '%s'\n", result);
    
    free(result);
    
    // Teste com string vazia
    result = ft_strjoin("", "test");
    printf("\nString vazia + 'test': '%s'\n", result);
    free(result);
    
    return (0);
}
