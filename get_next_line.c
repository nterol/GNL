/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 10:00:23 by nterol            #+#    #+#             */
/*   Updated: 2017/02/13 20:38:21 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		my_func(char **line, char **tmp)
{
		char *o;
		if ((o = ft_strchr(*tmp, CHAR)))
		{
			*line = ft_strsub(*tmp, 0, o - *tmp);
			*tmp = ft_strdup(o + 1);
			return (1);
		}
		return (0);
}

int		get_next_line(const int fd, char **line)
{
	int				ret;
	static char		*tmp = NULL;
	char			buf[BUFF_SIZE + 1];

	ret = 0;
	if (tmp == NULL)
		tmp = ft_strnew(0);
	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	*line = ft_strnew(0);
	if (my_func(line, &tmp) == 1)
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		tmp = ft_strjoin(tmp, buf);
		if(my_func(line, &tmp) == 1)
			return (1);
			if (ret < BUFF_SIZE && !(ft_strlen(tmp)))
				return (0);
	}
	if (ft_strlen(tmp))
	{
		*line = ft_strdup(tmp);
		free(tmp);
		return (1);
	}
	return (0);
}
