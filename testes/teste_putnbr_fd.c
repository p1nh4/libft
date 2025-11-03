/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_putnbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:39:36 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 19:39:40 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int main(void)
{
    ft_putstr_fd("Numeros positivos: ", 1);
    ft_putnbr_fd(42, 1);
    ft_putchar_fd(' ', 1);
    ft_putnbr_fd(123456, 1);
    ft_putchar_fd('\n', 1);
    
    ft_putstr_fd("Numeros negativos: ", 1);
    ft_putnbr_fd(-42, 1);
    ft_putchar_fd(' ', 1);
    ft_putnbr_fd(-123456, 1);
    ft_putchar_fd('\n', 1);
    
    ft_putstr_fd("Zero: ", 1);
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);
    
    ft_putstr_fd("INT_MIN: ", 1);
    ft_putnbr_fd(INT_MIN, 1);
    ft_putchar_fd('\n', 1);
    
    ft_putstr_fd("INT_MAX: ", 1);
    ft_putnbr_fd(INT_MAX, 1);
    ft_putchar_fd('\n', 1);
    
    return (0);
}
