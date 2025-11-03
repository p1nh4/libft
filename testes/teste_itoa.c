/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:18:41 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:42:58 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
    int tests[] = {0, 7, 42, -42, INT_MIN, INT_MAX};
    size_t ntests = sizeof(tests) / sizeof(tests[0]);

    for (size_t i = 0; i < ntests; i++)
    {
        int v = tests[i];
        char *s = ft_itoa(v);
        if (!s)
        {
            fprintf(stderr, "malloc falhou ao converter %d\n", v);
            continue;
        }
        printf("n = %d -> \"%s\" (len = %zu)\n", v, s, strlen(s));
        free(s);
    }

    return 0;
}
#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int tests[] = {0, 7, 42, -42, INT_MIN, INT_MAX};
    size_t ntests = sizeof(tests) / sizeof(tests[0]);

    for (size_t i = 0; i < ntests; i++)
    {
        int v = tests[i];
        char *s = ft_itoa(v);
        if (!s)
        {
            fprintf(stderr, "malloc falhou ao converter %d\n", v);
            continue;
        }
        printf("n = %d -> \"%s\" (len = %zu)\n", v, s, strlen(s));
        free(s);
    }

    return (0);
}

