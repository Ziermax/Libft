/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:20:23 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/03/28 16:19:08 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while ((unsigned char)*s != (unsigned char)c && *s)
		s++;
	if (*s == 0 && c != 0)
		return (NULL);
	return ((char *)s);
}
