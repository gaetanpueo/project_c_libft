/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:30:40 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/08 12:44:05 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*tmp;

	if (s)
	{
		i = 0;
		j = ft_strlen((char *)s) - 1;
		while (ft_isspace(s[i]) == 1)
			i++;
		tmp = (char *)malloc(sizeof(char) * (j - i + 1));
		while (ft_isspace(s[j]) == 1)
			j--;
		k = 0;
		while (i <= j)
		{
			tmp[k] = s[i];
			i++;
			k++;
		}
		tmp[k] = '\0';
		return (tmp);
	}
	return (NULL);
}
