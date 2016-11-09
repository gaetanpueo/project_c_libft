/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:16:14 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:27:15 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void		*ft_memalloc(size_t size)
{
	void	*mem;

	if (!size || !(mem = (void *)malloc(size)))
	{
		return (NULL);
	}
	return (ft_memset(mem, 0, size));
}
