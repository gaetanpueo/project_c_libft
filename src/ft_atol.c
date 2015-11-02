/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:20:14 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:25:27 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

long				ft_atol(const char *num)
{
	long			value;
	int				neg;

	if (num == NULL)
		return (0);
	value = 0;
	neg = 0;
	if (ft_ishexa(num))
	{
		num += 2;
		while (*num && ft_isxdigit(*num))
			value = value * 16 + ft_hexval(*num++);
	}
	else
	{
		if (num[0] == '-')
		{
			neg = 1;
			num++;
		}
		while (*num && ft_isdigit(*num))
			value = value * 10 + *num++ - '0';
	}
	return ((neg) ? (value * -1) : (value));
}

unsigned long		ft_atoul(const char *num)
{
	unsigned long	value;

	value = 0;
	if (ft_ishexa(num))
	{
		num += 2;
		while (*num && ft_isxdigit(*num))
			value = value * 16 + ft_hexval(*num++);
	}
	else
	{
		while (*num && ft_isdigit(*num))
			value = value * 10 + *num++ - '0';
	}
	return (value);
}
