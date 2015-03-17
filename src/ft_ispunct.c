/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:35:02 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/11 12:37:34 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_ispunct(int c)
{
	return ((c >= 0041 && c <= 0057) ||
			(c >= 0072 && c <= 0100) ||
			(c >= 0133 && c <= 0140) ||
			(c >= 0173 && c <= 0176));
}
