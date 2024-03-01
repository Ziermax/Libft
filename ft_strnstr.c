/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:10:12 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/21 19:26:31 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i_h;
	size_t		i_n;
	const char	*n;

	n = needle;
	if (!needle[0])
		return ((char *)haystack);
	i_h = 0;
	while (haystack[i_h] && i_h < len)
	{
		i_n = 0;
		while (n[i_n] && haystack[i_h + i_n] == n[i_n] && i_h + i_n < len)
			i_n++;
		if (!needle[i_n])
			return ((char *)haystack + i_h);
		i_h++;
	}
	return (0);
}
