/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstiter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:41:45 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:41:55 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	to_upper(void *content)
{
    char *str = (char *)content;
    int i = 0;
    
    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
}

void	print_content(void *content)
{
    printf("-> %s\n", (char *)content);
}

int main(void)
{
    t_list *lst = NULL;
    
    ft_lstadd_back(&lst, ft_lstnew("hello"));
    ft_lstadd_back(&lst, ft_lstnew("world"));
    ft_lstadd_back(&lst, ft_lstnew("42"));
    
    printf("Lista original:\n");
    ft_lstiter(lst, print_content);
    
    printf("\nConvertendo para maiusculas...\n");
    ft_lstiter(lst, to_upper);
    
    printf("\nLista modificada:\n");
    ft_lstiter(lst, print_content);
    
    // Limpar
    while (lst)
    {
        t_list *tmp = lst;
        lst = lst->next;
        free(tmp);
    }
    
    return (0);
}
