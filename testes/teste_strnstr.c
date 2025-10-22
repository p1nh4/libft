/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strnstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:37:43 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/22 20:37:47 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{

    char    *s1 = "Aprender C é divertido";
    char    *s2 = "C";
    size_t  max = ft_strlen(s2);

    char    *i1 = "0";
    char    *i2 = ft_strnstr(s1, s2, max);


    printf("ft_strnstr: %s\n", i2);
    return 0;
}
