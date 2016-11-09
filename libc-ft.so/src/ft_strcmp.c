/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:47:24 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 11:36:56 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_strcmp(const char *s1, const char *s2)
{
	size_t	l_s1;
	size_t	l_s2;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	return (ft_strncmp(s1, s2, (l_s1 > l_s2 ? l_s1 : l_s2)));
}
