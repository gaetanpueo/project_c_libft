/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:41:59 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:42:00 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (((i + j) < n + 1) && s1[i])
	{
		if ((ft_strncmp(&s1[i], s2, j)) == 0)
		{
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
