/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:03:25 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/11 16:04:45 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_strpos(const char *s1, const char *s2)
{
	char	*s1_t;
	char	*s2_t;
	int		l;
	int		counter;

	counter = 0;
	s1_t = (char *)s1;
	s2_t = (char *)s2;
	l = ft_strlen(s2_t);
	while (*s1_t != '\0')
	{
		if (ft_strncmp(s1_t, s2_t, l) == 0)
			return (counter);
		s1_t++;
		counter++;
	}
	return (counter);
}
