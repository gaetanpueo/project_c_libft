/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:22:41 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:28:05 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*t_dst;
	const char	*t_src;

	t_dst = dst;
	t_src = src;
	while (n--)
	{
		*t_dst++ = *t_src++;
	}
	return (dst);
}
