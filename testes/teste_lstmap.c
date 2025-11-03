/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_lstmap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:42:01 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:42:20 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void	*to_upper_content(void *content)
{
    char *str = (char *)content;
    char *new_str = malloc(strlen(str) + 1);
    int i = 0;
    
    if (!new_str)
        return (NULL);
    
    while (str[i])
    {
        new_str[i] = toupper(str[i]);
        i++;
    }
    new_str[i] = '\0';
    
    return (new_str);
}

void	del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = NULL;
    t_list *new_lst;
    
    ft_lstadd_back(&lst, ft_lstnew("hello"));
    ft_lstadd_back(&lst, ft_lstnew("world"));
    ft_lstadd_back(&lst, ft_lstnew("42"));
    
    printf("Lista original:\n");
    t_list *tmp = lst;
    while (tmp)
    {
        printf("-> %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    
    new_lst = ft_lstmap(lst, to_upper_content, del);
    
    printf("\nNova lista (maiusculas):\n");
    tmp = new_lst;
    while (tmp)
    {
        printf("-> %s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    
    // Limpar lista original
    while (lst)
    {
        tmp = lst;
        lst = lst->next;
        free(tmp);
    }
    
    // Limpar nova lista
    ft_lstclear(&new_lst, del);
    
    return (0);
}
