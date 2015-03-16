/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 09:59:38 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:28:25 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *dst_;

	dst_ = ft_memalloc(len);
	dst_ = ft_memcpy(dst_, src, len);
	dst = ft_memcpy(dst, dst_, len);
	return (dst);
}
