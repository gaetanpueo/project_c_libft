/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:09:00 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:27:40 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char const	*ptr;

	ptr = s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((char *)ptr);
		}
		ptr++;
	}
	return (NULL);
}
