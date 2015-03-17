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

int				ft_atoi(const char *num)
{
	return (ft_atol(num));
}

unsigned int	ft_atoui(const char *num)
{
	return (ft_atoul(num));
}
