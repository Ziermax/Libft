/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:36:05 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/19 18:04:17 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordsinstr(char const *str, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (*str != c && !is_word)
		{
			is_word = 1;
			count++;
		}
		else if (*str == c && is_word)
			is_word = 0;
		str++;
	}
	return (count);
}

static char	*ft_strdupchar(char const *str, char c, int *position)
{
	char	*newstr;
	int		nstr_len;
	int		i_nstr;
	int		i;

	nstr_len = 0;
	i_nstr = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i + nstr_len] && str[i + nstr_len] != c)
		nstr_len++;
	newstr = malloc(sizeof(char) * (nstr_len + 1));
	if (!newstr)
		return (0);
	while (i_nstr < nstr_len)
		newstr[i_nstr++] = str[i++];
	newstr[i_nstr] = 0;
	*position += i;
	return (newstr);
}

static void	ft_free_split(char **split, int i_split)
{
	int	i;

	i = 0;
	while (i < i_split)
		free(split[i++]);
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		i_str;
	int		i_split;

	if (!s)
		return (0);
	i_str = 0;
	i_split = 0;
	words = ft_wordsinstr(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (0);
	while (i_split < words)
	{
		split[i_split] = ft_strdupchar(s + i_str, c, &i_str);
		if (!split[i_split++])
		{
			ft_free_split(split, i_split - 1);
			return (0);
		}
	}
	split[i_split] = 0;
	return (split);
}
