/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:20:14 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:25:27 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int				ft_atoi(const char *str)
{
	int		number;
	char	scalar;

	number = 0;
	scalar = 1;
	while (*str && ft_isspace((unsigned char)*str))
		str++;
	if (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			scalar = -1;
		str++;
	}
	while (*str && ft_isdigit((unsigned char)*str))
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (scalar * number);
}
