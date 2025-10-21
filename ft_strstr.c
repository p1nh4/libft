/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:25:57 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/21 23:55:37 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t little_len;
    
    if (*little == '\0')
        return ((char *)big);
    
    little_len = ft_strlen(little);
    i = 0;
    
    while (big[i] && i < len)
    {
        // Verifica se little cabe nos bytes restantes
        if (i + little_len <= len)
        {
            if (ft_memcmp(&big[i], little, little_len) == 0)
                return ((char *)&big[i]);
        }
        i++;
    }
    return (NULL);
}
