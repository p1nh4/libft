/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:04:54 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/28 23:39:42 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_count_words(char const *s, char c);
void		ft_fill_tab(const char *s, char c, char **ar);
void		ft_free(char **tokens);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	count;

	if (!s)
		return ((void *)0);
	count = ft_count_words(s, c);
	arr = malloc((count + 1) * sizeof(char *));
	if (!arr)
		return ((void *)0);
	ft_fill_tab(s, c, arr);
	return (arr);
}

size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

void	ft_fill_tab(const char *s, char c, char **arr)
{
	size_t	len;

	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		*arr = ft_substr(s, 0 , len);
		if (!*arr)
			return (ft_free(arr));
		while (*s && *s != c)
			s++;
		arr++;
	}
	*arr = ((void *)0);
}

void	ft_free(char **tokens)
{
	char	**start;

	start = tokens;
	while (*tokens)
		free(*tokens++);
	free(start);
}
