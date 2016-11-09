/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:40:42 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/10 16:41:28 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *lst1;
	t_list *lst_;
	t_list *lst1_;

	lst1 = NULL;
	if (lst && f)
	{
		lst_ = lst;
		lst1 = f(lst_);
		if (!lst1)
			return (NULL);
		lst_ = lst_->next;
		lst1_ = lst1;
		while (lst_)
		{
			lst1_->next = f(lst_);
			if (!(lst1_->next))
				return (NULL);
			lst1_ = lst1_->next;
			lst_ = lst_->next;
		}
	}
	return (lst1);
}
