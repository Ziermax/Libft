/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelazqu <mvelazqu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:16:43 by mvelazqu          #+#    #+#             */
/*   Updated: 2024/03/28 16:53:31 by mvelazqu         ###   ########.fr       */
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
		(*del)(aux->content);
		free(aux);
		aux = tmp;
	}
	*lst = NULL;
}
