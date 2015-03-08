/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:57:01 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:27:50 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char const *s1_;
	unsigned char const *s2_;

	s1_ = s1;
	s2_ = s2;
	while (n-- && (*s1_ || *s2_))
	{
		if (*s1_ != *s2_)
		{
			return (*s1_ - *s2_);
		}
		s1_++;
		s2_++;
	}
	return (0);
}
