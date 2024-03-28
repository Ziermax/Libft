/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:10:44 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/03/28 16:29:34 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i_src;
	int	i_dst;
	int	dst_len;
	int	src_len;

	if (!dst || !src)
		return (dstsize);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i_src = 0;
	i_dst = dst_len;
	if ((unsigned int)dst_len >= dstsize)
		return (src_len + (int)dstsize);
	while (src[i_src] && i_dst < (int)dstsize - 1)
		dst[i_dst++] = src[i_src++];
	dst[i_dst] = '\0';
	return (src_len + dst_len);
}
