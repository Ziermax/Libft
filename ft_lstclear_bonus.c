/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:16:43 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/01/18 18:11:33 by mvelazqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;
	t_list	*tmp;

	if (!lst || !(*del))
		return ;
	aux = *lst;
	while (aux)
	{
		tmp = aux->next;
		(*del)(aux);
		aux = tmp;
	}
	*lst = 0;
}
