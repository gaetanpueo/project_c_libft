/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:36:11 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:27:28 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*t_dst;
	unsigned char const	*f_src;

	t_dst = dst;
	f_src = src;
	while (n > 0)
	{
		if ((*t_dst++ = *f_src++) == (unsigned char)c)
		{
			return (t_dst);
		}
		--n;
	}
	return (0);
}
