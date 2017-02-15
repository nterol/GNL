/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nterol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 09:39:30 by nterol            #+#    #+#             */
/*   Updated: 2017/02/13 20:37:26 by nterol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define CHAR '\n'

# include "libft/libft.h"
# include <fcntl.h>

int		get_next_line(const int fd, char **line);
int		main(int ac, char **av);

#endif
