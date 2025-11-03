/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_putstr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:38:41 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:38:44 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int main(void)
{
    ft_putstr_fd("Hello from stdout!\n", 1);
    ft_putstr_fd("Error message!\n", 2);
    ft_putstr_fd("", 1); // String vazia
    
    return (0);
}
