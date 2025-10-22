/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:01:47 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/22 21:01:49 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
    int res_val;
    char inp_str[30];

    // Initializing the input string
    strcpy(inp_str, "-1234adsnds");

    // Convert string to integer using atoi() and store the result in result_value
    res_val = ft_atoi(inp_str);

    printf("Input String = %s\nResulting Integer = %d\n", inp_str, res_val);

    return 0;
}
