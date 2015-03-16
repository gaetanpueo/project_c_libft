/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:18:07 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:29:01 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_putdouble_fd(double d, int fd)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	i += ft_putnbr_fd((int)d, fd);
	i += ft_putchar_fd('.', fd);
	d-= (int)d;
	while (j++ < 6)
		d *= 10;
	i += ft_putnbr_fd(d, fd);
	return (i);
}
