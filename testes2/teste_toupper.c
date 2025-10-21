/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_toupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:05:14 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/20 19:05:19 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
    char ch;

    ch = 'g';
    printf("%c in uppercase is represented as  %c",
           ch, toupper(ch));

    return 0;
}
