/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:08:10 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/03/28 15:05:29 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*rtrn;
	size_t	i;

	rtrn = malloc(sizeof(char) * count * size);
	if (!rtrn)
		return (NULL);
	i = 0;
	count = count * size;
	while (i < count)
		rtrn[i++] = 0;
	return (rtrn);
}
