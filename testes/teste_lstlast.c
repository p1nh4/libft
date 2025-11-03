/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:40:50 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:40:53 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *lst = NULL;
    t_list *last;
    
    // Teste com lista vazia
    last = ft_lstlast(lst);
    printf("Ultimo de lista vazia: %p\n", (void *)last);
    
    // Adicionar elementos
    ft_lstadd_front(&lst, ft_lstnew("Primeiro"));
    ft_lstadd_front(&lst, ft_lstnew("Segundo"));
    ft_lstadd_front(&lst, ft_lstnew("Terceiro"));
    
    last = ft_lstlast(lst);
    printf("Ultimo elemento: %s\n", (char *)last->content);
    
    // Limpar
    while (lst)
    {
        t_list *tmp = lst;
        lst = lst->next;
        free(tmp);
    }
    
    return (0);
}
