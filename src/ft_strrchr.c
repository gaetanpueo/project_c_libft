/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:18:47 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 12:39:47 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char			*ft_strrchr(const char *s, int c)
{
	const char	*t_s;

	t_s = s;
	t_s = t_s + ft_strlen(s);
	while (*t_s != (char)c && t_s != s)
		t_s--;
	if (*t_s == (char)c)
		return ((char *)t_s);
	return (NULL);
}
