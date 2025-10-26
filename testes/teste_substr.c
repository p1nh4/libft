/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 18:05:26 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/26 18:11:49 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "" 
int main() 
{

    printf("2 Caracteres: %s\n", ft_substr("hello", 3, 100));
    printf("Vazia: %s\n", ft_substr("hello", 10, 5));
    printf("3 Caracteres : %s\n", ft_substr("hello", 1, 3));

    return 0;
}
