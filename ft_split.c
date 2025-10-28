/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:04:54 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/28 22:54:08 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_neword(const char *s, char c);
void		ft_free(char **tokens);
void		ft_fill_tab(const char *s, char c, char **ar);
size_t		ft_count_words(char const *s, char c);

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

char	*ft_neword(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return ((void *)0);
	ft_memcpy(word, s, len);
	word[len] = '\0';
	return (word);
}

void	ft_free(char **tokens)
{
	char	**tmp;

	tmp = tokens;
	while (*tmp)
		free(*tmp++);
	free(tokens);
}

void	ft_fill_tab(const char *s, char c, char **arr)
{
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		*arr = ft_neword(s, c);
		if (!*arr)
			return (ft_free(arr));
		while (*s && *s != c)
			s++;
		arr++;
	}
	*arr = ((void *)0);
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
