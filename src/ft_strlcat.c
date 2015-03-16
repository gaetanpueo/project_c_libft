/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:25:27 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:38:59 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	ft_cat(const char *s, char *d, int freesp)
{
	while (*s)
	{
		if (freesp != 1)
		{
			*d = *s;
			d++;
			freesp--;
		}
		s++;
	}
	*d = '\0';
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		len;
	size_t		freesp;

	d = dst;
	s = src;
	freesp = size;
	while (freesp && *d)
	{
		d++;
		freesp--;
	}
	len = d - dst;
	freesp = size - len;
	if (!freesp)
		return (len + ft_strlen(src));
	ft_cat(s, d, freesp);
	return (len + ft_strlen(src));
}
