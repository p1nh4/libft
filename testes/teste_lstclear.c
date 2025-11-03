/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstclear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:41:33 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:41:36 by davidos-         ###   ########.fr       */
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
    t_list *lst = NULL;
    char *str;
    
    // Criar lista com conteudo alocado
    str = malloc(10);
    strcpy(str, "Um");
    ft_lstadd_back(&lst, ft_lstnew(str));
    
    str = malloc(10);
    strcpy(str, "Dois");
    ft_lstadd_back(&lst, ft_lstnew(str));
    
    str = malloc(10);
    strcpy(str, "Tres");
    ft_lstadd_back(&lst, ft_lstnew(str));
    
    printf("Lista criada com 3 elementos\n");
    printf("Tamanho antes: %d\n", ft_lstsize(lst));
    
    ft_lstclear(&lst, del);
    
    printf("Tamanho depois: %d\n", ft_lstsize(lst));
    printf("Lista: %p\n", (void *)lst);
    
    return (0);
}
