/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpueo--g <gpueo--g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 11:49:10 by gpueo--g          #+#    #+#             */
/*   Updated: 2014/11/25 11:49:11 by gpueo--g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char		*ft_next_line(char *str)
{
	char		*next_str;
	int			i;

	i = 0;
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	next_str = ft_strdup(str + i + 1);
	ft_strdel(&str);
	return (next_str);
}

static char		*ft_read_line(char *str, char c)
{
	size_t		i;
	char		*line;

	i = 0;
	while (str[i] != c)
		i++;
	line = ft_strnew(i);
	ft_strncpy(line, str, i);
	line[i] = '\0';
	return (line);
}

static void		ft_free(int aff, char **line, char **buffer, char **save)
{
	ft_strdel(buffer);
	*line = (aff > 0) ? ft_read_line(*save, '\n') : ft_read_line(*save, '\0');
	if (aff == 0)
		ft_strdel(save);
}

int				get_next_line(int const fd, char **line)
{
	int			aff;
	char		*buffer;
	char		*temp;
	static char	*save;

	buffer = ft_strnew(BUFF_SIZE + 1);
	if (BUFF_SIZE <= 0 || line == NULL || buffer == NULL)
		return (-1);
	save = (save == NULL) ? ft_strnew(1) : save;
	aff = 2;
	while (ft_strchr(save, '\n') == NULL && aff != 0)
	{
		if ((aff = read(fd, buffer, BUFF_SIZE)) == -1)
			return (-1);
		buffer[aff] = '\0';
		temp = save;
		save = ft_strjoin(save, buffer);
		ft_strdel(&temp);
	}
	ft_free(aff, line, &buffer, &save);
	if (aff == 0)
		return (0);
	save = ft_next_line(save);
	return (1);
}
