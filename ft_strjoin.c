/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:27 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/19 18:51:42 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sjoin;
	int		fst_len;
	int		snd_len;

	if (!s1 || !s2)
		return (0);
	fst_len = ft_strlen(s1);
	snd_len = ft_strlen(s2);
	sjoin = malloc(sizeof(char) * (fst_len + snd_len + 1));
	if (!sjoin)
		return (0);
	ft_memcpy(sjoin, s1, fst_len + 1);
	ft_strlcat(sjoin, s2, snd_len + fst_len + 1);
	return (sjoin);
}
