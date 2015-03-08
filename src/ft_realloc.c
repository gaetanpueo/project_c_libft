/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:35:15 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/10 17:36:18 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_realloc(char *old, int size)
{
	int		i;
	char	*new;

	i = 0;
	if ((new = malloc(sizeof(*new) * (ft_strlen(old) + size))) == NULL)
		return (NULL);
	while (old[i])
	{
		new[i] = old[i];
		i++;
	}
	free(old);
	return (new);
}
