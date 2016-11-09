/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:21:10 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/05 16:24:24 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_putstr_fd(char const *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	while (*s)
	{
		i += ft_putchar_fd(*s, fd);
		s++;
	}
	return (i);
}
