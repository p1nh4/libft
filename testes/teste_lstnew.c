/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:39:51 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:39:54 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *node;
    char *content = "Hello 42!";
    
    node = ft_lstnew(content);
    if (!node)
    {
        printf("Erro ao criar node!\n");
        return (1);
    }
    
    printf("Content: %s\n", (char *)node->content);
    printf("Next: %p\n", (void *)node->next);
    
    free(node);
    return (0);
}
