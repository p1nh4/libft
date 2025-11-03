/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstsize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:40:32 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:40:35 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *lst = NULL;
    
    printf("Tamanho lista vazia: %d\n", ft_lstsize(lst));
    
    // Adicionar 3 elementos
    ft_lstadd_front(&lst, ft_lstnew("Um"));
    ft_lstadd_front(&lst, ft_lstnew("Dois"));
    ft_lstadd_front(&lst, ft_lstnew("Tres"));
    
    printf("Tamanho lista com 3 elementos: %d\n", ft_lstsize(lst));
    
    // Limpar
    while (lst)
    {
        t_list *tmp = lst;
        lst = lst->next;
        free(tmp);
    }
    
    return (0);
}
