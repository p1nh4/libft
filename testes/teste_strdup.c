/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:36:38 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:36:50 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *original = "Hello 42!";
    char *copia;

    copia = ft_strdup(original);
    if (!copia)
    {
        printf("Erro ao alocar memoria!\n");
        return (1);
    }
    printf("Original: %s\n", original);
    printf("Copia: %s\n", copia);
    printf("Enderecos diferentes? %s\n", 
           (original != copia) ? "Sim" : "Nao");
    
    free(copia);
    return (0);
}

