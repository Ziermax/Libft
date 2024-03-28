/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:44:17 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/03/28 16:31:01 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char static	*ft_sub_malloc(size_t start, size_t *len, size_t s_len)
{
	char	*substr;

	if (s_len - start <= *len)
		*len = s_len - start;
	substr = malloc(sizeof(char) * (*len + 1));
	if (!substr)
		return (NULL);
	substr[*len] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		s_len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ft_strlen(s);
	if (len == 0 || start >= (unsigned int)s_len)
		return (ft_calloc(sizeof(char), 1));
	substr = ft_sub_malloc(start, &len, s_len);
	if (!substr)
		return (NULL);
	while (s[start] && i < len)
		substr[i++] = s[start++];
	return (substr);
}
