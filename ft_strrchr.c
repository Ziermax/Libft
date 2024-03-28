/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:27:43 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/03/28 16:31:24 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*rtrn;

	if (!s)
		return (NULL);
	rtrn = 0;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			rtrn = s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return ((char *)rtrn);
}
