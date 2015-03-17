/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:11:46 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:32:49 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_putnbr_base(unsigned long nb, char *base, int i)
{
	int		len;

	len = ft_strlen(base);
	if (nb >= (unsigned long)len)
	{
		i += ft_putnbr_base(nb / len, base, 0);
		i += ft_putnbr_base(nb % len, base, 0);
	}
	else
		i += ft_putchar(base[nb]);
	return (i);
}
