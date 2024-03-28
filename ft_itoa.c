/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:47:44 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/03/28 16:41:00 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	static	ft_intlen(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char static	*ft_edge_case(int n)
{
	char	*num;

	num = NULL;
	if (n == -2147483648)
	{
		num = malloc(sizeof(char) * 12);
		if (!num)
			return (NULL);
		ft_memmove(num, "-2147483648", 12);
	}
	else if (n == 0)
	{
		num = malloc (sizeof(char) * 2);
		if (!num)
			return (NULL);
		ft_memmove(num, "0", 2);
	}
	return (num);
}

char static	*ft_itoa_malloc(int *n, int *n_size)
{
	char	*num;

	if (*n < 0)
	{
		*n_size += 1;
		*n *= -1;
		num = malloc(sizeof(char) * (*n_size + 1));
		if (!num)
			return (NULL);
		*num = '-';
	}
	else
		num = malloc(sizeof(char) * (*n_size + 1));
	if (!num)
		return (NULL);
	num[*n_size] = '\0';
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		n_size;

	if (n == -2147483648 || n == 0)
		return (ft_edge_case(n));
	n_size = ft_intlen(n);
	num = ft_itoa_malloc(&n, &n_size);
	if (!num)
		return (NULL);
	while (n > 0)
	{
		num[n_size - 1] = n % 10 + '0';
		n /= 10;
		n_size--;
	}
	return (num);
}
