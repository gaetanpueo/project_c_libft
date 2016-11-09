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

/*
**   Changer le nom de la fonction car il retourne aussi la valeur ascii
**   d'un char.
*/

int			ft_putnbr_base(unsigned long nb, char *base)
{
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(base);
	if (nb >= (unsigned long)len)
	{
		i += ft_putnbr_base(nb / len, base);
		i += ft_putnbr_base(nb % len, base);
	}
	else
		i += ft_putchar(base[nb]);
	return (i);
}
