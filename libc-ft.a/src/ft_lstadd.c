/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:38:45 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/10 16:39:13 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*new_next;

	if (alst && new)
	{
		new_next = *alst;
		*alst = new;
		new->next = new_next;
	}
}
