/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:56:42 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/11 16:56:43 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t		ft_count_char(char *str, char token)
{
	int		i;
	int		count;
	int		len;

	i = 0;
	count = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == token)
			count++;
		i++;
	}
	return (count);
}