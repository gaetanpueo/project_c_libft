/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:05:58 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:37:47 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strdup(const char *src)
{
	char	*dest;

	if (!(dest = ft_strnew(ft_strlen(src))))
	{
		return (NULL);
	}
	return (ft_strcpy(dest, src));
}
