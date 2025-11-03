/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstdelone.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:41:18 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:41:22 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	del(void *content)
{
    free(content);
}

int main(void)
{
    char *str = malloc(20);
    if (!str)
        return (1);
    
    strcpy(str, "Conteudo alocado");
    t_list *node = ft_lstnew(str);
    
    printf("Antes de deletar: %s\n", (char *)node->content);
    
    ft_lstdelone(node, del);
    printf("Node deletado com sucesso!\n");
    
    return (0);
}
