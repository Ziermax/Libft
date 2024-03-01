/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:17:47 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:44:03 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s_len;
	char	*cpy;

	s_len = ft_strlen(s1);
	cpy = malloc(sizeof(char) * (s_len + 1));
	if (!cpy)
		return (0);
	ft_memcpy(cpy, s1, s_len + 1);
	return (cpy);
}
