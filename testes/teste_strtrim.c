/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 23:28:24 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/26 23:28:30 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main() {

    char *str= "abababbaLinux hintbbabab";
    char *trimmed; 
    
    printf("Before trimming: %s\n", str);

    trimmed = ft_strtrim(str, "ab");

    printf("After trimming: %s\n", trimmed);
    free(trimmed); 
    return 0;
}
