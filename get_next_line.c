/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 10:00:23 by nterol            #+#    #+#             */
/*   Updated: 2017/02/16 18:51:43 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int				check_n_fill(char **line, char **tmp)
{
	char		*o;

	if ((o = ft_strchr(*tmp, CHAR)))
	{
		*line = ft_strsub(*tmp, 0, o - *tmp);
		*tmp = ft_strdup(o + 1);
		return (1);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	int			ret;
	static char	*tmp = NULL;
	char		buf[BUFF_SIZE + 1];

	!tmp ? tmp = ft_strnew(0) : 0;
	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	*line = ft_strnew(0);
	if (check_n_fill(line, &tmp) == 1)
		return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		tmp = ft_strjoin(tmp, buf);
		if (check_n_fill(line, &tmp) == 1)
			return (1);
	}
	if (ft_strcmp(tmp, ""))
	{
		*line = ft_strdup(tmp);
		tmp = NULL;
		free(tmp);
		return (1);
	}
	return (0);
}
