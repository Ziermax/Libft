/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:12:38 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/21 18:01:48 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_cinstr(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		first;
	int		last;
	int		i;

	if (!s1 || !set)
		return (0);
	i = 0;
	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && ft_cinstr(s1[first], set))
		first++;
	while (last > first && ft_cinstr(s1[last - 1], set))
		last--;
	trim = malloc(sizeof(char) * (last - first + 1));
	if (!trim)
		return (0);
	while (first < last)
		trim[i++] = s1[first++];
	trim[i] = 0;
	return (trim);
}
