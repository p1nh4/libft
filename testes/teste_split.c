/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 22:52:31 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/28 22:52:34 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

i#include <stdio.h>
#include "libft.h"

int main(void)
{
    char **res;
    char *str = "   split   this   string  for me!   ";
    size_t i;

    res = ft_split(str, ' ');
    if (!res)
    {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    printf("Palavras encontradas:\n");
    i = 0;
    while (res[i])
    {
        printf("[%zu]: '%s'\n", i, res[i]);
        i++;
    }

    ft_free(res); // liberar memória

    // Teste de uma string só com uma palavra
    res = ft_split("olol", ' ');
    printf("\nUma palavra:\n");
    i = 0;
    while (res[i])
        printf("[%zu]: '%s'\n", i++, res[i]);
    ft_free(res);

    // Teste de string vazia ou só espaços
    res = ft_split("     ", ' ');
    printf("\nSó espaços:\n");
    if (res[0] == NULL)
        printf("Nenhuma palavra encontrada\n");
    ft_free(res);

    return 0;
}

