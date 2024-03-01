/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:27:43 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/14 17:28:43 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*rtrn;

	rtrn = 0;
	while (*s)
	{
		if (*s == c)
			rtrn = s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return ((char *)rtrn);
}
