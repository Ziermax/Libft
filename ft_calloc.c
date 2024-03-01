/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:08:10 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:16:32 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*rtrn;
	size_t	i;

	rtrn = malloc(sizeof(char) * count * size);
	if (!rtrn)
		return (0);
	i = 0;
	while (i < count * size)
	{
		rtrn[i] = 0;
		i++;
	}
	return (rtrn);
}
