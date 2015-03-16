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

void	ft_putdouble_fd(double d, int fd)
{
	int		i;

	i = 0;
	ft_putnbr_fd((int)d, fd);
	ft_putchar_fd('.', fd);
	d-= (int)d;
	while (i++ < 6)
		d *= 10;
	ft_putnbr_fd(d, fd);
}
