/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 10:07:31 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/18 10:07:32 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strrep(char *str, char const *sub, char const *rep, int recurs)
{
	char	*result;
	char	*pos1;
	char	*pos;
	int		f;

	f = 0;
	pos = str;
	while ((pos = ft_strstr(pos, sub)) && f++)
		pos += ft_strlen(sub);
	f = ((ft_strlen(str) - (ft_strlen(sub) * f)) + (ft_strlen(rep) * f)) + 1;
	result = (char *)ft_memalloc(f);
	pos = str;
	while ((pos1 = ft_strstr(pos, sub)))
	{
		f = (pos1 - pos);
		ft_strncat(result, pos, f);
		ft_strncat(result, rep, ft_strlen(rep));
		pos = (pos1 + ft_strlen(sub));
		if (recurs == REPLACE_ONCE)
			break ;
	}
	if (pos != (str + ft_strlen(str)))
		ft_strncat(result, pos, (str - pos));
	return (result);
}
