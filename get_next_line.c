/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 10:00:23 by nterol            #+#    #+#             */
/*   Updated: 2017/02/08 12:04:12 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int		i;
	int		ret;
	char	buf[BUFF_SIZE];

	if ((fd < 0 || line == NULL || read(fd, buf, 0) < 0))
		return (-1);
	*line = ft_strnew(1);
	while (ret = read(fd, buf, BUFF_SIZE))
	{
		buf[ret] = '\0';
		if (ft_strchr(buf, CHAR))
			break;
	}
}

