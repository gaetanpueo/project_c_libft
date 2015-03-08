/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 10:05:28 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/18 10:05:29 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrev(char *s)
{
	int		i;
	char	*str;

	if (!s || !*s)
		return (s);
	i = ft_strlen(s) - 1;
	str = ft_strndup(s + i, 1);
	while (i)
		ft_strncat(str, s + --i, 1);
	return (str);
}
