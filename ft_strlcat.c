/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:10:44 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/19 17:48:05 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i_src;
	int	i_dst;
	int	dst_len;
	int	src_len;

	dst_len = 0;
	src_len = 0;
	while (src[src_len])
		src_len++;
	while (dst[dst_len])
		dst_len++;
	i_src = 0;
	i_dst = dst_len;
	if (dst_len >= (int)dstsize)
		return (src_len + (int)dstsize);
	while (src[i_src] && i_dst < (int)dstsize - 1)
	{
		dst[i_dst] = src[i_src];
		i_src++;
		i_dst++;
	}
	dst[i_dst] = 0;
	return (src_len + dst_len);
}
