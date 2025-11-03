/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:01:47 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/03 00:02:33 by davidos-         ###   ########.fr       */
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:01:47 by davidos-          #+#    #+#             */
/*   Updated: 2025/11/02 by davidos-                 ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	inp_str[30];
	int		res_val;

	strcpy(inp_str, "-1234adsnds");
	res_val = ft_atoi(inp_str);
	printf("Input String = %s\nResulting Integer = %d\n", inp_str, res_val);
	strcpy(inp_str, "   42");
	res_val = ft_atoi(inp_str);
	printf("Input String = '%s'\nResulting Integer = %d\n", inp_str, res_val);
	strcpy(inp_str, "+123");
	res_val = ft_atoi(inp_str);
	printf("Input String = %s\nResulting Integer = %d\n", inp_str, res_val);
	strcpy(inp_str, "  \t\n\r\v\f  469 \n");
	res_val = ft_atoi(inp_str);
	printf("Input String = '%s'\nResulting Integer = %d\n", inp_str, res_val);
	return (0);
}
