/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:39:16 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:38:48 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*tmp;

	if (s1 != NULL && s2 != NULL)
	{
		len = (ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
		tmp = (char *)malloc(sizeof(*tmp) * (len));
		i = 0;
		if (tmp)
		{
			while (*s1)
				tmp[i++] = *s1++;
			while (*s2)
				tmp[i++] = *s2++;
			tmp[i] = '\0';
			return (tmp);
		}
	}
	return (NULL);
}
