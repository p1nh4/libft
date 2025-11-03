/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstadd_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:41:07 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:41:09 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *lst = NULL;
    
    ft_lstadd_back(&lst, ft_lstnew("Primeiro"));
    ft_lstadd_back(&lst, ft_lstnew("Segundo"));
    ft_lstadd_back(&lst, ft_lstnew("Terceiro"));
    
    // Imprimir lista
    t_list *current = lst;
    int i = 0;
    while (current)
    {
        printf("[%d]: %s\n", i++, (char *)current->content);
        current = current->next;
    }
    
    // Limpar
    while (lst)
    {
        t_list *tmp = lst;
        lst = lst->next;
        free(tmp);
    }
    
    return (0);
}
