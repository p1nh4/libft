/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_putendl_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:39:14 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:39:18 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    ft_putendl_fd("Primeira linha", 1);
    ft_putendl_fd("Segunda linha", 1);
    ft_putendl_fd("", 1); // Linha vazia
    
    return (0);
}
