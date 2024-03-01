/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:16:00 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/15 17:20:05 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*rtrn;
	int		s_size;
	int		i;

	if (!s || !(*f))
		return (0);
	s_size = ft_strlen(s);
	rtrn = malloc(sizeof(char) * (s_size + 1));
	if (!rtrn)
		return (0);
	i = 0;
	rtrn[s_size] = 0;
	while (i < s_size)
	{
		rtrn[i] = (*f)(i, s[i]);
		i++;
	}
	return (rtrn);
}
