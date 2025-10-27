/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:04:54 by davidos-          #+#    #+#             */
/*   Updated: 2025/10/27 23:47:31 by davidos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_free(char **tokens);
size_t		ft_count_words(char const *s, char c);
size_t		ft_word_len(const char *s, char c);
char		*ft_new_word(const char *s, size_t len);
const char	*ft_next_word(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char const	*w_start;
	char		**tokens;
	size_t		d_words;
	size_t		w_len;

	d_words = ft_count_words(s, c);
	tokens = malloc((d_words + 1) * sizeof(char *));
	if (!tokens)
		return ((void *)0);
	while (*s)
	{
		s = ft_next_word(s, c);
		if (*s)
			break;
		w_start = s;
		w_len = ft_word_len(s, c);
		*tokens = ft_new_word(s, w_len);
		if (!tokens)
		{
			ft_free(tokens);
			return ((void *)0);
		}
		s += w_len;
		tokens++;
	}
	*tokens = ((void *)0);
	return (tokens);
}

void	ft_free(char **tokens)
{
	char	**tmp;

	tmp = tokens;
	while (*tmp)
	{
		free(*tmp);
		tmp++;
	}
	free(tokens);
}

size_t	ft_count_words(char const *s, char c)
{
	size_t		delimiter;
	const char	*w_start;

	w_start = s;
	delimiter = 0;
	while (*s)
	{
		if (*s != c && (s == w_start || *(s - 1) == c))
			delimiter++;
		s++;
	}
	return (delimiter);
}

size_t	ft_word_len(const char *s, char c)
{
	size_t	w_len;

	w_len = 0;
	while (s[w_len] && s[w_len] != c)
		w_len++;
	return (w_len);
}

char	*ft_new_word(const char *s, size_t len)
{
	char	*word;

	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return ((void *)0);
	ft_strlcpy(word, s, (len + 1));
	return (word);
}

const char	*ft_next_word(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}
