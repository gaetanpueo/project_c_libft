/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_old_size.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 10:32:07 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/23 10:32:08 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_realloc_o(char *ptr, size_t old, size_t size)
{
	char	*new;
	size_t	size_;

	size_ = 0;
	if (size == 0)
		new = ft_memalloc(sizeof(char));
	else
		new = ft_memalloc(size);
	if (ptr == NULL || new == NULL)
		return (NULL);
	if (size)
		size_ = size;
	else
		size_ = sizeof(char);
	ft_bzero(new, size_);
	if (old > size)
		ft_memcpy(new, ptr, size_);
	else
		ft_memcpy(new, ptr, old);
	ft_memdel((void *)&ptr);
	return (new);
}
