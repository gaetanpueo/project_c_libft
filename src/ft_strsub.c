/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:20:43 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 12:43:54 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (s != NULL)
	{
		if (!(new_str = ft_strnew(len)))
		{
			return (NULL);
		}
		return (ft_strncpy(new_str, s + start, len));\
	}
	return (NULL);
}
