/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nospace_strlen.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:18:07 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:29:01 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_nospace_strlen(char *str)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		if (str[i] && (str[i] == ' ' || str[i] == '\t'))
		{
			while (str[i] && (str[i] == ' ' || str[i] == '\t'))
				i++;
			if (str[i])
				size++;
		}
		if (str[i])
		{
			i++;
			size++;
		}
	}
	return (size);
}
