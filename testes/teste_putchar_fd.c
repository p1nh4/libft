/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_putchar_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:38:20 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:38:27 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    // Escrever no stdout (fd = 1)
    write(1, "Testando putchar_fd: ", 21);
    ft_putchar_fd('4', 1);
    ft_putchar_fd('2', 1);
    ft_putchar_fd('\n', 1);
    
    // Escrever no stderr (fd = 2)
    write(2, "Erro: ", 6);
    ft_putchar_fd('X', 2);
    ft_putchar_fd('\n', 2);
    
    return (0);
}

