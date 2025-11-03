/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstadd_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:40:13 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:40:18 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *lst = NULL;
    t_list *new;
    
    // Adicionar primeiro elemento
    new = ft_lstnew("Terceiro");
    ft_lstadd_front(&lst, new);
    
    // Adicionar segundo elemento (vai para frente)
    new = ft_lstnew("Segundo");
    ft_lstadd_front(&lst, new);
    
    // Adicionar terceiro elemento (vai para frente)
    new = ft_lstnew("Primeiro");
    ft_lstadd_front(&lst, new);
    
    // Imprimir lista
    t_list *current = lst;
    int i = 0;
    while (current)
    {
        printf("[%d]: %s\n", i++, (char *)current->content);
        current = current->next;
    }
    
    // Limpar (sem ft_lstclear para este teste simples)
    while (lst)
    {
        t_list *tmp = lst;
        lst = lst->next;
        free(tmp);
    }
    
    return (0);
}
