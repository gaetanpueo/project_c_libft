/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:29:28 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/13 15:49:41 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char				*ft_ltoa(long n)
{
	size_t			len;
	char			*str;
	unsigned long	u_nbr;

	len = ft_count_digits(n);
	u_nbr = n;
	if (n < 0)
	{
		u_nbr = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = u_nbr % 10 + '0';
	while (u_nbr /= 10)
		str[--len] = u_nbr % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
